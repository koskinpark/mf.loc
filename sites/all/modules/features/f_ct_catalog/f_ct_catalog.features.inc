<?php
/**
 * @file
 * f_ct_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function f_ct_catalog_image_default_styles() {
  $styles = array();

  // Exported image style: image_of_child_taxonomy_term.
  $styles['image_of_child_taxonomy_term'] = array(
    'label' => 'Image of child taxonomy term',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 170,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
