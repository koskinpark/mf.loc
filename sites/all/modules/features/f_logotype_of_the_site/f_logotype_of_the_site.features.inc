<?php
/**
 * @file
 * f_logotype_of_the_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_logotype_of_the_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_logotype_of_the_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_logotype_of_the_site_image_default_styles() {
  $styles = array();

  // Exported image style: logotype.
  $styles['logotype'] = array(
    'label' => 'logotype',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 330,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
