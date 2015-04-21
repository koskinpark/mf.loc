<?php
/**
 * @file
 * f_ct_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_slider_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function f_ct_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_ct_slider_image_default_styles() {
  $styles = array();

  // Exported image style: mainpage_image_slideshow.
  $styles['mainpage_image_slideshow'] = array(
    'label' => 'Mainpage image slideshow',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function f_ct_slider_node_info() {
  $items = array(
    'mainpage_slideshow' => array(
      'name' => t('Mainpage Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
