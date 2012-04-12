<?php
// $Id: simple_contest_levels.helper.inc,v 1.1.2.1 2010/07/09 04:36:13 vinoth.3v Exp $

/**
 * @file simple_contest_levels.helper.inc
 *
 */

/**
 * Implementation of hook_simple_contest().
 */
function _simple_contest_levels_simple_contest_completed($op, $node, $winners){


    $settings = simple_contest_get_settings($node->type);
    
    if (!empty($settings['levels_enabled_type'])) {
    	if (empty($settings['level_create_freq'])) { // create immediately
    		
    		$contest = new stdClass();
    		
    		$type = $settings['levels_enabled_type'];
    		$contest->type = $type;
			$contest->is_new = TRUE;
	        $contest->status = 1; // published
	        
    		$new_settings = simple_contest_get_settings($type);
	        
	        $date_field = NULL;
	        $date_field_name = $new_settings['date_field'];
	        
  			$content_type_info = _content_type_info();
  			if ($content_type_info['content types'][$type]) {
    			foreach ($content_type_info['content types'][$type]['fields'] as $field) {
      				if ($field['field_name'] == $date_field_name) {
      					$date_field = $field;
      					break;
      				}
      			}
    		}else {
    			watchdog('simple_contest', 'Cannot find the contest type ' . $type,  WATCHDOG_WARNING);
    		}
            
    		if ( $date_field ) {
    			$default_value2 = $date_field['widget']['default_value2'];
      			$default_value_code2 = $date_field['widget']['default_value_code2'];
      			
	    		if (empty($default_value) || empty($default_value_code2) || $default_value == 'blank' || $default_value == 'same' ) {
	      			$end_date_time = strtotime("+1 day"); // default contest end date
	      		} else {
	      			$end_date_time = strtotime($default_value_code2);
	      		}
    		} else {
    			watchdog('simple_contest', 'Cannot find the date field ' . $date_field_name . ' in type ' . $type,  WATCHDOG_WARNING);
    			$end_date_time = strtotime("+1 day");
    		}
    		
    		$start_date = date('Y-m-d', time());
    		$end_date = date('Y-m-d', $end_date_time);
      		
    		$title = "!type_name - !start - !end";
    		$type_name = $content_type_info['content types'][$type]['name'];   		

	        $contest->title = t($title, array('!type_name' => $type_name, '!start' => $start_date, '!end' => $end_date));
	        
	        $contest->{$date_field_name}[0]['value'] = $start_date;
	        $contest->{$date_field_name}[0]['value2'] = $end_date;

        	node_save($contest); // save the new node
    		
    		db_query("INSERT INTO {simple_contest_levels} (nid, pnid, timestamp) VALUES (%d, %d, %d)", $contest->nid, $node->nid, $end_date_time);
    		
    	} else { // save it to table for cron processing
    		//calculate next contest date
    		$freq = $settings['level_create_freq'];
    		$period = $settings['level_create_period'];
    		$next_date = strtotime("+$freq $period");
    		
    		db_query("INSERT INTO {simple_contest_levels} (nid, pid, timestamp) VALUES (NULL, %d, %d)", $node->nid, $next_date);
    	}
    }
    
}
