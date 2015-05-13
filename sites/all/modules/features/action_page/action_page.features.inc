<?php
/**
 * @file
 * action_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function action_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function action_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function action_page_image_default_styles() {
  $styles = array();

  // Exported image style: other_actions.
  $styles['other_actions'] = array(
    'label' => 'other actions',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pictures_for_action_page.
  $styles['pictures_for_action_page'] = array(
    'label' => 'pictures for action page',
    'effects' => array(),
  );

  return $styles;
}
