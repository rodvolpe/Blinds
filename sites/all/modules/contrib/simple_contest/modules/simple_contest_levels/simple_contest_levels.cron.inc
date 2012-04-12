<?php
// $Id: simple_contest_repeat.helper.inc,v 1.1.2.1 2010/07/09 04:36:13 vinoth.3v Exp $

/**
 * @file simple_contest_repeat.helper.inc
 *
 */

/**
 * Function simple_contest_levels_run_cron
 * 
 * Helper function that implements hook_cron()
 */
function _simple_contest_levels_cron() {
	
	// get all rows that have null nid
	$sql = "SELECT * FROM {simple_contest_levels} 
		WHERE nid IS NULL AND timestamp <= %d ";
	
	$res = db_query($sql, time());
	
	while ($row = db_fetch_object($res)) {
		
		$level1_node = node_load($row->pnid);
		if (!$level1_node) {
			watchdog('simple_contest', 'Cannot find the contest node ' . $row->pnid . ' to create next level contests.',  WATCHDOG_WARNING);
			continue;
		}
		
		$level1_type = $level1_node->type;
		$level1_settings = simple_contest_get_settings($level1_type); 
		
		$contest = new stdClass();
    		
    	$level2_type = $settings['levels_enabled_type'];
    	$contest->type = $level2_type;
		$contest->is_new = TRUE;
        $contest->status = 1; // published
        
        $content_type_info = _content_type_info();
        $level2_settings = simple_contest_get_settings($level2_type);
	        
        $date_field = NULL;
        $date_field_name = $level2_settings['date_field'];
        
  		$content_type_info = _content_type_info();
  		if ($content_type_info['content types'][$level2_type]) {
    		foreach ($content_type_info['content types'][$level2_type]['fields'] as $field) {
      			if ($field['field_name'] == $date_field_name) {
      				$date_field = $field;
      				break;
      			}
      		}
    	}else {
    		watchdog('simple_contest', 'Cannot find the contest type ' . $level2_type,  WATCHDOG_WARNING);
    	}
            
		if ( $date_field ) {
    		$default_value2 = $date_field['widget']['default_value2'];
      		$default_value_code2 = $date_field['widget']['default_value_code2'];
      		
    		if (empty($default_value) || empty($default_value_code2) || $default_value == 'blank' || $default_value == 'same' ) {
      			$end_date_time = strtotime("+1 day", $row->timestamp); // default contest end date
      		} else {
      			$end_date_time = strtotime($default_value_code2, $row->timestamp);
      		}
    	} else {
    		watchdog('simple_contest', 'Cannot find the date field ' . $date_field_name . ' in type ' . $level2_type,  WATCHDOG_WARNING);
    		$end_date_time = strtotime("+1 day");
    	}
    		
	    $start_date = date('Y-m-d', $row->timestamp);
    	$end_date = date('Y-m-d', $end_date_time);
      	
    	$title = "!type_name - !start - !end";
    	$type_name = $content_type_info['content types'][$level2_type]['name'];   		

        $contest->title = t($title, array('!type_name' => $type_name, '!start' => $start_date, '!end' => $end_date));
        
        $contest->{$date_field_name}[0]['value'] = $start_date;
        $contest->{$date_field_name}[0]['value2'] = $end_date;

        node_save($contest); // save the new node
        
	}
	
}
