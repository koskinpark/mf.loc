<?php
/**
 * @file
 * f_ct_actions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_actions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_ct_actions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_ct_actions_node_info() {
  $items = array(
    'mainpage_slideshow' => array(
      'name' => t('Actions'),
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
