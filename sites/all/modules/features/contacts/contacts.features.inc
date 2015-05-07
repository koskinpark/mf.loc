<?php
/**
 * @file
 * contacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contacts_ctools_plugin_api($module = NULL, $api = NULL) {
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
function contacts_node_info() {
  $items = array(
    'contacts' => array(
      'name' => t('Contacts'),
      'base' => 'node_content',
      'description' => t('This content type will be displayed on the page of contacts'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}