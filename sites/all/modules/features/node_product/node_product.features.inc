<?php
/**
 * @file
 * node_product.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_product_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function node_product_image_default_styles() {
  $styles = array();

  // Exported image style: node_of_product_image.
  $styles['node_of_product_image'] = array(
    'label' => 'Node of product image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
