<?php
// $Id: simple_contest_levels.form.inc,v 1.1.2.1 2010/07/09 04:36:13 vinoth.3v Exp $

/**
 * @file
 *
 * simple_contest_levels custom module
 * mostly adopted from date/date/date_repeat.inc, thanks to karens.
 */

/**
 * Implementation of hook_form_FORM_ID_alter().
 */
function _simple_contest_levels_content_type_settings_form_alter(&$form, &$form_state) {

  $type = $form['type']['#value'];

  $settings = simple_contest_get_settings($type);

  $options = array('' => t('Not enabled'));

  
  foreach (simple_contest_get_types() as $node_type => $info) {
  	
    if ($type != $node_type) {
    	$options[$node_type] = $info->name;
    }
  }
  
  $form['levels'] = array(
		'#type' => 'fieldset',
		'#title' => t('Contest levels'),
		'#collapsible' => TRUE,
		'#collapsed' => !$settings['levels_enabled_type'],
		'#description' => t("This section allows you to move the winners to the next level of contest. for example semi-final to final."),
        '#weight' => 6,
  );
  
  $form['levels']['levels_enabled_type'] = array(
		'#type' => 'select',
		'#title' => t('Enable contest levels and move the winners to next contest of type'),
		'#default_value' => $settings['levels_enabled_type'],
		'#options' => $options,
		'#required' => FALSE,
  		'#default_value' => $settings['levels_enabled_type'],
  );
  
  $options = array(
    0 => t('Immediately'),
  );
  
  for ($i = 1; $i < 366; $i++) {
    $options[$i] = t('after @number', array('@number' => $i));
  }
  
  $form['levels']['level_create_freq'] = array(
		'#type' => 'select',
		'#title' => t('Create the next level contest after # frequency'),
		'#default_value' => $settings['level_create_freq'],
		'#options' => $options,
		'#required' => FALSE,
  		'#default_value' => $settings['level_create_freq'],
  );
  
  $form['levels']['level_create_period'] = array(
		'#type' => 'select',
		'#title' => t('Period'),
		'#default_value' => $settings['level_create_period'],
		'#options' => array(''=>'', 'day' => t('Day(s)'), 'week' => t('Week(s)'), 'month' => t('Month(s)'), 'year' => t('Year(s)')),
		'#required' => FALSE,
  		'#default_value' => $settings['level_create_period'],
  );
  
  $form['#validate'][] = 'simple_contest_levels_content_type_settings_form_validate';
  $form['#submit'][] = 'simple_contest_levels_content_type_settings_submit';

}

/**
 * Validation for date repeat form element.
 *
 * Create multiple values from the RRULE results.
 * TODO: Lots more work needed here.
 */
function _simple_contest_levels_content_type_settings_form_validate($form, &$form_state) {

  $form_values = $form_state['values'];

}

/**
 * Validation for date repeat form element.
 *
 * Create multiple values from the RRULE results.
 * Lots more work needed here.
 */
function _simple_contest_levels_content_type_settings_submit($form, &$form_state) {

  $form_values = $form_state['values'];
  $type = $form_values['type'];
  
}

