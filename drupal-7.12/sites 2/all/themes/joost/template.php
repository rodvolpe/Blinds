<?php

/**
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "joost" to match
 *    your subthemes name, e.g. if you name your theme "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "joost".
 * 2. Uncomment the required function to use.
 */

/**
 * Override or insert variables into the html templates.
 */
function joost_preprocess_html(&$vars) {
  // Load the media queries styles
  // Remember to rename these files to match the names used here - they are
  // in the CSS directory of your subtheme.
  $media_queries_css = array(
    'joost.responsive.style.css',
    'joost.responsive.gpanels.css'
    
  );
  load_subtheme_media_queries($media_queries_css, 'joost');
  
  // Copy from here Template for Content type


// Finish copy Template for Content type
  

 /**
  * Load IE specific stylesheets
  * AT automates adding IE stylesheets, simply add to the array using
  * the conditional comment as the key and the stylesheet name as the value.
  *
  * See our online help: http://adaptivethemes.com/documentation/working-with-internet-explorer
  *
  * For example to add a stylesheet for IE8 only use:
  *
  *  'IE 8' => 'ie-8.css',
  *
  * Your IE CSS file must be in the /css/ directory in your subtheme.
  */
  /* -- Delete this line to add a conditional stylesheet for IE 7 or less.
  $ie_files = array(
    'lte IE 7' => 'ie-lte-7.css',
  );
  load_subtheme_ie_styles($ie_files, 'joost');
  // */
}

/* -- Delete this line if you want to use this function
function joost_process_html(&$vars) {
}
// */

/**
 * Override or insert variables into the page templates.
 */
/* -- Delete this line if you want to use these functions
function joost_preprocess_page(&$vars) {
}

function joost_process_page(&$vars) {
}
// */

/**
 * Override or insert variables into the node templates.
 */

function joost_preprocess_node(&$vars) {
  switch($vars['type']) {
  
    case 'ready_made_':
  
    foreach ($vars['node']->field_ready_made_ref[LANGUAGE_NONE] as $product_id) { 
    $product_ids[] = $product_id['product_id'];
   // dsm($product_id);
    //dsm($product_ids);
    }    
    $products = commerce_product_load_multiple($product_ids);
    $product_prices = array();
      foreach ($products as $product_id => $product) {
      $product_wrapper = entity_metadata_wrapper('commerce_product', $product);
      $product_prices[] = $product_wrapper->commerce_price->amount->value();
      $count_prices = count($product_prices);
     // dsm($count_prices);
      } 

sort($product_prices, SORT_NUMERIC);

$lower = commerce_currency_format(reset($product_prices), 'GBP');
$upper = commerce_currency_format(end($product_prices), 'GBP');  
$price_range = "$lower - $upper";
$price_lower = "$lower";

if ($count_prices == 1){
  
   $vars['content']['product:commerce_price'][0]['#markup'] = $price_lower; 
  } else 
{
  $vars['content']['product:commerce_price'][0]['#markup'] = $price_range; 
}
break;
    
  }
}



/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function joost_preprocess_comment(&$vars) {
}

function joost_process_comment(&$vars) {
}
// */

/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function joost_preprocess_block(&$vars) {
}

function joost_process_block(&$vars) {
}
// */

/**
 * Add the Style Schemes if enabled.
 * NOTE: You MUST make changes in your subthemes theme-settings.php file
 * also to enable Style Schemes.
 */
/* -- Delete this line if you want to enable style schemes.
// DONT TOUCH THIS STUFF...
function get_at_styles() {
  $scheme = theme_get_setting('style_schemes');
  if (!$scheme) {
    $scheme = 'style-default.css';
  }
  if (isset($_COOKIE["atstyles"])) {
    $scheme = $_COOKIE["atstyles"];
  }
  return $scheme;
}
if (theme_get_setting('style_enable_schemes') == 'on') {
  $style = get_at_styles();
  if ($style != 'none') {
    drupal_add_css(path_to_theme() . '/css/schemes/' . $style, array(
      'group' => CSS_THEME,
      'preprocess' => TRUE,
      )
    );
  }
}
// */
