<?php
/**
 * @file
 * initial_migration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function initial_migration_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'braid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Braid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Braid';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_stock_on_off' => 'field_product_stock_on_off',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Step 6: Choose your braid type';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Stock */
  $handler->display->display_options['fields']['field_product_stock_on_off']['id'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['table'] = 'field_data_field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['field'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    0 => '43',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'braid';
  $export['braid'] = $view;

  $view = new view;
  $view->name = 'chains';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Chains';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chains';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_stock_on_off' => 'field_product_stock_on_off',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Step 4: Choose your chain type or colour';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_product_type']['id'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['fields']['field_product_type']['field'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['label'] = '';
  $handler->display->display_options['fields']['field_product_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_type']['field_api_classes'] = 0;
  /* Field: Content: Product Subset */
  $handler->display->display_options['fields']['field_product_subset']['id'] = 'field_product_subset';
  $handler->display->display_options['fields']['field_product_subset']['table'] = 'field_data_field_product_subset';
  $handler->display->display_options['fields']['field_product_subset']['field'] = 'field_product_subset';
  $handler->display->display_options['fields']['field_product_subset']['label'] = '';
  $handler->display->display_options['fields']['field_product_subset']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_subset']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_subset']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_subset']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_subset']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_product_subset']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_subset']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_subset']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_subset']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Stock */
  $handler->display->display_options['fields']['field_product_stock_on_off']['id'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['table'] = 'field_data_field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['field'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid_1']['id'] = 'field_product_type_tid_1';
  $handler->display->display_options['filters']['field_product_type_tid_1']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid_1']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid_1']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_product_type_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_type_tid_1']['vocabulary'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'chains';
  $export['chains'] = $view;

  $view = new view;
  $view->name = 'control';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Control';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Control';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    0 => '43',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'control';
  $export['control'] = $view;

  $view = new view;
  $view->name = 'fabrics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fabrics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fabrics';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_stock_on_off' => 'field_product_stock_on_off',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Step 1: Select your fabric for your blinds.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Stock */
  $handler->display->display_options['fields']['field_product_stock_on_off']['id'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['table'] = 'field_data_field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['field'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Product Category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fabrics';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Begin blind configuration process';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['fabrics'] = $view;

  $view = new view;
  $view->name = 'my_blind_configurations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My blind configurations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My blind configurations';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_conf_product' => 'field_conf_product',
    'field_conf_braid' => 'field_conf_braid',
    'field_conf_chain' => 'field_conf_chain',
    'field_conf_shape' => 'field_conf_shape',
    'field_conf_side' => 'field_conf_side',
    'field_conf_type' => 'field_conf_type',
    'body' => 'body',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_product' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_braid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_chain' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_shape' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_side' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Product ref */
  $handler->display->display_options['fields']['field_conf_product']['id'] = 'field_conf_product';
  $handler->display->display_options['fields']['field_conf_product']['table'] = 'field_data_field_conf_product';
  $handler->display->display_options['fields']['field_conf_product']['field'] = 'field_conf_product';
  $handler->display->display_options['fields']['field_conf_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_product']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_product']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_product']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_conf_product']['settings'] = array(
    'view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_conf_product']['field_api_classes'] = 0;
  /* Field: Content: Braid ref */
  $handler->display->display_options['fields']['field_conf_braid']['id'] = 'field_conf_braid';
  $handler->display->display_options['fields']['field_conf_braid']['table'] = 'field_data_field_conf_braid';
  $handler->display->display_options['fields']['field_conf_braid']['field'] = 'field_conf_braid';
  $handler->display->display_options['fields']['field_conf_braid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_braid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_braid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_braid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_braid']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_braid']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_conf_braid']['field_api_classes'] = 0;
  /* Field: Content: Chain type ref */
  $handler->display->display_options['fields']['field_conf_chain']['id'] = 'field_conf_chain';
  $handler->display->display_options['fields']['field_conf_chain']['table'] = 'field_data_field_conf_chain';
  $handler->display->display_options['fields']['field_conf_chain']['field'] = 'field_conf_chain';
  $handler->display->display_options['fields']['field_conf_chain']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_chain']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_chain']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_chain']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_chain']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_chain']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_conf_chain']['field_api_classes'] = 0;
  /* Field: Content: Shape ref */
  $handler->display->display_options['fields']['field_conf_shape']['id'] = 'field_conf_shape';
  $handler->display->display_options['fields']['field_conf_shape']['table'] = 'field_data_field_conf_shape';
  $handler->display->display_options['fields']['field_conf_shape']['field'] = 'field_conf_shape';
  $handler->display->display_options['fields']['field_conf_shape']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_shape']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_shape']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_shape']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_shape']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_shape']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_conf_shape']['field_api_classes'] = 0;
  /* Field: Content: Side ref */
  $handler->display->display_options['fields']['field_conf_side']['id'] = 'field_conf_side';
  $handler->display->display_options['fields']['field_conf_side']['table'] = 'field_data_field_conf_side';
  $handler->display->display_options['fields']['field_conf_side']['field'] = 'field_conf_side';
  $handler->display->display_options['fields']['field_conf_side']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_side']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_side']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_side']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_side']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_side']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_side']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_side']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_conf_side']['field_api_classes'] = 0;
  /* Field: Content: Type ref */
  $handler->display->display_options['fields']['field_conf_type']['id'] = 'field_conf_type';
  $handler->display->display_options['fields']['field_conf_type']['table'] = 'field_data_field_conf_type';
  $handler->display->display_options['fields']['field_conf_type']['field'] = 'field_conf_type';
  $handler->display->display_options['fields']['field_conf_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_conf_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_conf_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_conf_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_conf_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_conf_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_conf_type']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_conf_type']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_conf_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Stock';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blind_configuration' => 'blind_configuration',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-blind-configurations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My blind configurations';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['my_blind_configurations'] = $view;

  $view = new view;
  $view->name = 'newest_fabrics_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newest fabrics block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newest fabrics';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['newest_fabrics_block'] = $view;

  $view = new view;
  $view->name = 'pullcord';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pullcord';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pullcord';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_stock_on_off' => 'field_product_stock_on_off',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Pull cord selection';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Step 5: Pull Cord selection';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Stock */
  $handler->display->display_options['fields']['field_product_stock_on_off']['id'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['table'] = 'field_data_field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['field'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    0 => '17',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pullcord';
  $export['pullcord'] = $view;

  $view = new view;
  $view->name = 'shape';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shape';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shape';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_restriction' => 'field_product_restriction',
    'field_product_stock_on_off' => 'field_product_stock_on_off',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Step 5: Choose your chain shape, if required';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
  /* Field: Content: Restriction */
  $handler->display->display_options['fields']['field_product_restriction']['id'] = 'field_product_restriction';
  $handler->display->display_options['fields']['field_product_restriction']['table'] = 'field_data_field_product_restriction';
  $handler->display->display_options['fields']['field_product_restriction']['field'] = 'field_product_restriction';
  $handler->display->display_options['fields']['field_product_restriction']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_product_restriction']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_restriction']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_product_restriction']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_restriction']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_product_restriction']['field_api_classes'] = 0;
  /* Field: Content: Stock */
  $handler->display->display_options['fields']['field_product_stock_on_off']['id'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['table'] = 'field_data_field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['field'] = 'field_product_stock_on_off';
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_stock_on_off']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_stock_on_off']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    0 => '21',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shape';
  $export['shape'] = $view;

  return $export;
}
