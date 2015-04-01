<?php
/**
 * @file
 * footer_panel.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function footer_panel_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|footer_type|footer_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'footer_type';
  $ds_layout->view_mode = 'footer_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_picture',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_picture' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|footer_type|footer_mode'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function footer_panel_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'footer_mode';
  $ds_view_mode->label = 'Footer inform about site';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['footer_mode'] = $ds_view_mode;

  return $export;
}
