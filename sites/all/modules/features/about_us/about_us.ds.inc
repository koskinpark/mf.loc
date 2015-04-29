<?php
/**
 * @file
 * about_us.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function about_us_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|about_us|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'about_us';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|about_us|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function about_us_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|about_us|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'about_us';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_about_group',
        1 => 'title',
        2 => 'body',
        3 => 'field_picture_about_us',
      ),
    ),
    'fields' => array(
      'group_about_group' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_picture_about_us' => 'ds_content',
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
  $export['node|about_us|full'] = $ds_layout;

  return $export;
}
