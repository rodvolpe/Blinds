<?php

/*
* Get the allowed control types
*/
//function get_allowed_control($nid, $type){
//  $base = base_path() . drupal_get_path_alias("node/".$nid) . "/". $type;
//
//  $output = '<h5>Step 3: Choose side control or spring blinds</h5>
//<ul>
//<li>Side Control - <a href="'.$base.'/left">select left</a></li>
//<li>Side Control - <a href="'.$base.'/right">select right</a></li>
//<li>Spring Control - <a href="'.$base.'/spring">select spring</a></li>
//</ul>';
//  return $output;
//}

function alias_to_nid($value){
  $path = drupal_lookup_path("source","product-part/".$value);
 
  if($path !== false){
    $array_path = explode("/", $path);
    $nid = $array_path[1];
    return $nid;
  }  
  return false;
}

/*
* Display the current configuration options
*/
function display_current_selections(){
  //TODO - validation to check if product combination is allowed

  $labels_side_control = array(
      "Blind type",
      "Fabric type",
      "Chain side",
      "Chain type or colour",
      "Shape",
      "Braid",
      "Roll",
      "Fitting"
  );
  $labels_spring = array(
      "Blind type",
      "Fabric type",
      "Chain side",
      "Shape",
      "Pull"
  );

  $output = "<h4>Current selection</h4><ul>";
  $i = 0;
  $args = func_get_args();
  if(in_array("spring",$args) == true){
    $labels = $labels_spring;
    if(count($args) > 4){
      array_pop($args); //Lose the last value off the array
    }
  } else {
    
      $labels = $labels_side_control;
  }
  foreach($args AS $value){
    $nid = alias_to_nid($value);

    if($nid !== false){
      $node = node_load($nid);
      $title = $node->title;
      $stock = $node->field_product_stock_on_off['und'][0]['value'];
      $stock_message = ($stock == "1") ? " " : "OUT OF STOCK";
      $output .= "<li><strong>" . $labels[$i] . "</strong> - " . $title . " - (nid:" . $nid . ") " . $stock_message . "</li>";
    }else{
      $output .= "<li><strong>" . $labels[$i] . "</strong> - " . $value . "</li>";
    }

    $i++;
  }
  $output .= "</ul>";

  return $output;
}

/*
*
*/
function product_builder_roller_blinds($type){

  $output = display_current_selections($type);
 
  $output .= views_embed_view("fabrics2", $display_id = 'default');

  return $output;
}

function product_builder_roller_side($type, $fabric){

  $output = display_current_selections($type, $fabric);

  $output .= '<h5>Step 3: Choose side control, spring or electric </h5>
<ul>
<li>Side Control - <a href="'.$fabric.'/left">select left</a></li>
<li>Side Control - <a href="'.$fabric.'/right">select right</a></li>
<li>Spring Control - <a href="'.$fabric.'/spring">select spring</a></li>
<li>Electric Control - <a href="'.$fabric.'/electric">select electric</a></li>
</ul>';
  return $output; 
}
//function product_builder_roller_blinds_type($product, $type, $side){
//  $output = display_current_selections($product,$type,$side);
//
//  if($side == "spring"){
//    $full_path = base_path() . current_path() . "/none";
//    $output .= '<p><a href="'.$full_path.'">I do not want to specify a shape</a></p>';
//    $output .= views_embed_view("shape", $display_id = 'default');
//  }else{
//    $output .= views_embed_view("chains", $display_id = 'default');
//  }
//
//
//  return $output;
//}

function product_builder_roller_blinds_chain_type($type, $fabric, $side){
  $output = display_current_selections($type, $fabric,$side);

  if($side == "spring"){
    $full_path = base_path() . current_path() . "/none";
    $output .= '<p><a href="'.$full_path.'">I do not want to specify a shape</a></p>';
    $output .= views_embed_view("shape", $display_id = 'default');
  }else{
    $output .= views_embed_view("chains", $display_id = 'default');
  }


  return $output;
}
      


function product_builder_roller_blinds_shape($type, $fabric, $side, $chain_type){
  $output = display_current_selections($type, $fabric,$side,$chain_type);

  if($side == "spring"){
    $output .= views_embed_view("pullcord", $display_id = 'default');
  }else{
    $full_path = base_path() . current_path() . "/none";
    $output .= '<p><a href="'.$full_path.'">I do not want to specify a shape</a></p>';
    $output .= views_embed_view("shape", $display_id = 'default');
  }

  return $output;
}

function product_builder_roller_blinds_braid($type, $fabric, $side, $chain_type, $shape){
  $output = display_current_selections($type, $fabric,$side,$chain_type,$shape);

  if($side == "spring"){
    $output .= "sdgsd";
    drupal_goto(current_path() . "/none");
  }else{
    $output .= views_embed_view("braid", $display_id = 'default');
  }

  return $output;
}

function product_builder_roller_blinds_confirm( $type, $fabric, $side, $chain_type, $shape, $braid){
  $output = display_current_selections($type, $fabric,$side,$chain_type,$shape,$braid);

  $output .= "<p>Congratulations, you have chosen a new complete blinds configuration</p>";

  $hidden_fields = array(
      "type" => alias_to_nid($type),
      "product" => alias_to_nid($fabric),
      "side" => alias_to_nid($side),
      "chain_type" => alias_to_nid($chain_type),
      "shape" => alias_to_nid($shape),
      "braid" => alias_to_nid($braid)
  );
  $form = drupal_get_form('save_blind_configuration_form',$hidden_fields);
  $output .= drupal_render($form);

  return $output;
}


function save_blind_configuration_form($form, &$form_state, $hidden_fields) {
  $form['save'] = array(
    '#type' => 'fieldset',
    '#title' => t('Save configuration for later'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['save']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Your blinds configuration name'),
    '#size' => 30,
    '#maxlength' => 64,
    '#description' => t('Enter the name for this custom blind'),
  );
  $form['save']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Your notes about this configuration'),
    '#default_value' => '',
    '#cols' => 60,
    '#rows' => 5,
  );

  foreach($hidden_fields AS $key => $value){
    $form['save']['hidden'][$key] = array('#type' => 'value', '#value' => $value);
  }

  $form['save']['submit'] = array('#type' => 'submit', '#value' => t('Save blinds configuration'));

  return $form;
}


function save_blind_configuration_form_submit($form, &$form_state) {
  //dpm($form_state['values']);

  global $user;
  if ($user->uid == 0) {
    //user is not logged in
    drupal_set_message(t('You need to log in or sign up to save this configuration.'));
  }else{
    $node = new stdClass();
    $node->title = $form_state['values']['name'];
    $node->type = 'blind_configuration';
    $node->language = LANGUAGE_NONE;
    $node->status = 1;
    $node->promote = 0;
    $node->sticky = 0;
    $node->format = 0;
    $node->revision = 1;
    $node->log = t('Node saved: ' . $form_state['values']['description']);
    $node->uid = $user->uid;
    $node->body['und'][0]['value'] = $form_state['values']['description'];
    $node->body['und'][0]['summary'] = $form_state['values']['description'];
    $node->body['und'][0]['format'] = 'full_html';
    $node->body['und'][0]['safe_value'] = $form_state['values']['description'];
    $node->body['und'][0]['safe_summary'] = $form_state['values']['description'];

    $node->{'field_conf_product'}[$node->language][0]['target_id'] = $form_state['values']['product'];
    $node->{'field_conf_type'}[$node->language][0]['target_id'] = $form_state['values']['type'];
    $node->{'field_conf_side'}[$node->language][0]['target_id'] = $form_state['values']['side'];
    $node->{'field_conf_chain'}[$node->language][0]['target_id'] = $form_state['values']['chain_type'];
    $node->{'field_conf_shape'}[$node->language][0]['target_id'] = $form_state['values']['shape'];
    $node->{'field_conf_braid'}[$node->language][0]['target_id'] = $form_state['values']['braid'];

    node_submit($node); //Prepare node for saving by populating author and creation date.
    node_save($node); //Save new node

    drupal_set_message(t('Your form has been saved.'));
    drupal_goto('my-blind-configurations');
  }
}


//Functions for Value Products

//
//function alias_to_nid_value($value){
//  $path= drupal_lookup_path("source","product-part/");
//  if($path!== false){
//    $array_path= explode("/", $path);
//    $nid = $array_path[1];
//    return $nid;
//  }  
//  return false;
//}

/*
* Display the current configuration options for roller value products
*/
//function display_current_selections_value(){
//  //TODO - validation to check if product combination is allowed
//
//  $labels_side_control_value = array(
//      "Blind type",
//      "Fabric type",
//      "Chain side",
//      "Roll",
//      "Fitting"
//  );
//  $labels_spring_value = array(
//      "Blind type",
//      "Fabric type",
//      "Chain side",
//      "Shape",
//      "Pull"
//  );
//
//  $output = "<h4>Current selection</h4><ul>";
//  $i = 0;
//  $args = func_get_args();
// //sm($args);
// 
//  if(in_array("spring",$args) == true){
//    $labels_value = $labels_spring_value;
//    if(count($args) > 4){
//      array_pop($args); //Lose the last value off the array
//    }
//  } else {
//    
//      $labels_value = $labels_side_control_value;
//      
//  }
//  foreach($args AS $value){
//    $nid = alias_to_nid($value);
//    if($nid !== false){
//      $node = node_load($nid);
//      $title = $node->title;
//      $stock = $node->field_product_stock_on_off['und'][0]['value'];
//      $stock_message = ($stock == "1") ? " " : "OUT OF STOCK";
//      $output .= "<li><strong>" . $labels_value[$i] . "</strong> - " . $title . " - (nid:" . $nid . ") " . $stock_message . "</li>";
//    }else{
//      $output .= "<li><strong>" . $labels_value[$i] . "</strong> - " . $value . "</li>";
//    }
//
//    $i++;
//  }
//  $output .= "</ul>";
//
//  return $output;
//
//}
//
//
//
//function product_builder_roller_value_blinds($type, $nid){
//
// 
//  $output = display_current_selections_value($type);
// 
//  $output .= views_embed_view("fabrics2", $display_id = 'default');
// 
//  return $output;
//}
//
//function product_builder_roller_value_side($type, $fabric){
//
//  $output = display_current_selections_value($type, $fabric);
//
//  $output .= '<h5>Step 3: Choose side control, spring or electric </h5>
//<ul>
//<li>Side Control - <a href="'.$fabric.'/left">select left</a></li>
//<li>Side Control - <a href="'.$fabric.'/right">select right</a></li>
//<li>Spring Control - <a href="'.$fabric.'/spring">select spring</a></li>
//<li>Electric Control - <a href="'.$fabric.'/electric">select electric</a></li>
//</ul>';
//  return $output; 
//}
//
//
//function product_builder_roller_value_roll($type, $fabric, $side){
//
//  $output = display_current_selections_value($type, $fabric, $side);
//
//  $output .= '<h5>Step 4: Choose Roll Type </h5>
//<ul>
//<li>Standard Roll - <a href="'.$side.'/standard">select standard</a></li>
//<li>Reverse Roll - <a href="'.$side.'/reverse">select reverse</a></li>
//
//</ul>';
//  
//  return $output; 
//}
//
//function product_builder_roller_value_fitting($type, $fabric, $side,$roll){
//  $output = display_current_selections_value($type,$fabric,$side,$roll);
//
//  $output .= '<h5>Step 5: Select Fitting </h5>
//<ul>
//<li>Recess Fitting - <a href="'.$roll.'/recess">select recess</a></li>
//<li>Exact Fititng - <a href="'.$roll.'/exact">select exact</a></li>
//
//</ul>';
//  return $output; 
//
//}
//
//function product_builder_roller_blinds_confirm_value( $type,$fabric,$side,$roll,$fitting,$chain_type){
//  $output = display_current_selections_value($type,$fabric,$side,$roll,$fitting);
//
//  $output .= "<p>Congratulations, you have chosen a new complete blinds configuration</p>";
//
//  $hidden_fields_value = array(
//      "type" => alias_to_nid($type),
//      "product" => alias_to_nid($fabric),
//      "side" => alias_to_nid($side),
//      "roll" => alias_to_nid($roll),
//      "fitting" => alias_to_nid($fitting),
//     // "chain_type" => $chain_type='N/A'
//     // "shape" == 'N/A',
//      //"braid" =='N/A'
//  );
//  $form = drupal_get_form('save_blind_configuration_value_form',$hidden_fields_value);
//  $output .= drupal_render($form);
//
//  return $output;
//}
//
//function save_blind_configuration_value_form($form, &$form_state, $hidden_fields) {
//  $form['save_value'] = array(
//    '#type' => 'fieldset',
//    '#title' => t('Save configuration for later'),
//    '#collapsible' => FALSE,
//    '#collapsed' => FALSE,
//  );
//  $form['save_value']['name'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Your blinds configuration name'),
//    '#size' => 30,
//    '#maxlength' => 64,
//    '#description' => t('Enter the name for this custom blind'),
//  );
//  $form['save_value']['description'] = array(
//    '#type' => 'textarea',
//    '#title' => t('Your notes about this configuration'),
//    '#default_value' => '',
//    '#cols' => 60,
//    '#rows' => 5,
//  );
//
//  foreach($hidden_fields AS $key => $value){
//    $form['save_value']['hidden'][$key] = array('#type' => 'value', '#value' => $value);
//  }
//
//  $form['save_value']['submit'] = array('#type' => 'submit', '#value' => t('Save blinds configuration value'));
//
//  return $form;
//}
//
//
//function save_blind_configuration_value_form_submit($form, &$form_state) {
//  dpm($form_state['values']);
//
//  global $user;
//  if ($user->uid == 0) {
//    //user is not logged in
//    drupal_set_message(t('You need to log in or sign up to save this configuration.'));
//  }else{
//    $node = new stdClass();
//    $node->title = $form_state['values']['name'];
//    $node->type = 'blind_configuration_value';
//    $node->language = LANGUAGE_NONE;
//    $node->status = 1;
//    $node->promote = 0;
//    $node->sticky = 0;
//    $node->format = 0;
//    $node->revision = 1;
//    $node->log = t('Node saved: ' . $form_state['values']['description']);
//    $node->uid = $user->uid;
//    $node->body['und'][0]['value'] = $form_state['values']['description'];
//    $node->body['und'][0]['summary'] = $form_state['values']['description'];
//    $node->body['und'][0]['format'] = 'full_html';
//    $node->body['und'][0]['safe_value'] = $form_state['values']['description'];
//    $node->body['und'][0]['safe_summary'] = $form_state['values']['description'];
//    $node->{'field_conf_product'}[$node->language][0]['target_id'] = $form_state['values']['product'];
//    $node->{'field_conf_type'}[$node->language][0]['target_id'] = $form_state['values']['type'];
//    $node->{'field_conf_side'}[$node->language][0]['target_id'] = $form_state['values']['side'];  
//    $node->{'field_conf_roll'}[$node->language][0]['target_id'] = $form_state['values']['roll'];
//    $node->{'field_conf_fitting'}[$node->language][0]['target_id'] = $form_state['values']['fitting'];
//  //  $node->{'field_conf_chain'}[$node->language][0]['target_id'] = $form_state['values']['chain_type'];
//   // $node->{'field_conf_shape'}[$node->language][0]['target_id'] = $form_state['values']['shape'];
//   // $node->{'field_conf_braid'}[$node->language][0]['target_id'] = $form_state['values']['blade'];
//
//    node_submit($node); //Prepare node for saving by populating author and creation date.
//    node_save($node); //Save new node
//
//    drupal_set_message(t('Your form has been saved.'));
//    drupal_goto('my-blind-configurations-value');
//  }
//}







////Roman
//
//function product_builder_roman_blinds($alias){
//
//  return "roman";
//}