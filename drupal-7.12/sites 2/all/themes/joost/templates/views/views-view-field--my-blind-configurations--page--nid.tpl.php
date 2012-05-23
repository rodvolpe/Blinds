<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>
<?php


$node = node_load($output);
$fabric = $node->field_conf_product['und'][0]['target_id'];
$type = $node->field_conf_type['und'][0]['target_id'];
$side = $node->field_conf_side['und'][0]['target_id'];
$chain = $node->field_conf_chain['und'][0]['target_id'];
$shape = $node->field_conf_shape['und'][0]['target_id'];
$braid = $node->field_conf_braid['und'][0]['target_id'];
unset($node);

$stock_test = stock_test_complete_blind($fabric,$type,$side,$chain,$shape,$braid);
if($stock_test == false){
  print "IN STOCK";
  print '<p><a href="#">Buy / Add to basket</a></p>';
}else{
  print "<h6>OUT OF STOCK</h6>";
  foreach($stock_test AS $value){
    print "-" . $value . "<br/>";
  }
}
?>