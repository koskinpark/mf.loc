<?php
/**
 * @file
 * most_viewed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function most_viewed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function most_viewed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function most_viewed_image_default_styles() {
  $styles = array();

  // Exported image style: most_viewed_image_style.
  $styles['most_viewed_image_style'] = array(
    'label' => 'most viewed image style',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
