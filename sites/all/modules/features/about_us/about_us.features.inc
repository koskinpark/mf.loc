<?php
/**
 * @file
 * about_us.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_us_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function about_us_node_info() {
  $items = array(
    'about_us' => array(
      'name' => t('About us'),
      'base' => 'node_content',
      'description' => t('Content of this content_type will be displayed on page "About us"'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
