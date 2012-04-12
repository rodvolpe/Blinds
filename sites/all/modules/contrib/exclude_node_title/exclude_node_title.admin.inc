<?php
/**
 * @file
 * Exclude Node Title Administrative Interface
 *
 * @author Gabriel Ungureanu
 * gabriel.ungreanu@ag-prime.com
 */

/**
 * Admin configuration form
 */
function exclude_node_title_admin_settings() {
  $form['exclude_node_title_nid_list'] = array(
    '#type' => 'textarea',
    '#title' => t('Exclude node title from display'),
    '#description' => t('Select nodes to exclude title from display. One $nid per line.'),
    '#default_value' => implode("\n", variable_get('exclude_node_title_nid_list', array())),
  );

  $form['exclude_node_title_remove_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Remove node title from teasers too'),
    '#description' => t('Select if you wish to remove title from node teasers.'),
    '#default_value' => variable_get('exclude_node_title_remove_title', 0),
  );

  $form['exclude_node_title_content_type'] = array(
    '#type' => 'fieldset',
    '#title' => t('Exclude title by content-type'),
    '#description' => t('Exclude node title of nodes of the following content types.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $node_types = _node_types_build()->names;  
  $form['exclude_node_title_content_type']['exclude_node_title_content_type_values'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content-types'),
    '#default_value' => variable_get('exclude_node_title_content_type_values', array()),
    '#options' => $node_types,
  );

  $form['#submit'][] = 'exclude_node_title_admin_submit';
  return system_settings_form($form);
}
/**
 * Submit function for hook_admin_settings form
 * It processes list of nodes in exception list and saves them as array instead of plain text.
 * Comes before saving actual values in the databse.
 */
function exclude_node_title_admin_submit($form, &$form_state) {
  // process node id exceptions list
  $exception_ids = $form_state['values']['exclude_node_title_nid_list'];
  $exception_ids = explode("\n", $exception_ids);
  $exception_ids = array_map('trim', $exception_ids);
  $form_state['values']['exclude_node_title_nid_list'] = $exception_ids;
}