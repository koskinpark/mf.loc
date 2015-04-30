<?php
/**
 * @file
 * node_product.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_product_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
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
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_pictures_of_node_page.
  $styles['small_pictures_of_node_page'] = array(
    'label' => 'Small pictures of node page',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
