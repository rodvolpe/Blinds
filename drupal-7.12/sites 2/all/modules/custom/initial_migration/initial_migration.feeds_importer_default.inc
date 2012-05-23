<?php
/**
 * @file
 * initial_migration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function initial_migration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'products';
  $feeds_importer->config = array(
    'name' => 'Products',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'fabric',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Type',
            'target' => 'field_product_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Product Category',
            'target' => 'field_product_category',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Product subset',
            'target' => 'field_product_subset',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Product code',
            'target' => 'field_product_code',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Friendly name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Stock (meters, units)',
            'target' => 'field_product_stock',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Price (£)',
            'target' => 'field_product_price',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Price-up mechanism',
            'target' => 'field_product_priceup_mechanism',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Status',
            'target' => 'field_product_status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Width Restriction',
            'target' => 'field_product_restriction_width',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Shape Restriction',
            'target' => 'field_product_restriction_shape',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Stock',
            'target' => 'field_product_stock_on_off',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['products'] = $feeds_importer;

  return $export;
}
