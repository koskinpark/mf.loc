<?php
/**
 * @file
 * f_ct_page_not_found.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_page_not_found_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_ct_page_not_found_node_info() {
  $items = array(
    'page_not_found' => array(
      'name' => t('Page not found'),
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
