<?php
/**
 * @file
 * f_ct_slider.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_ct_slider_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mainpage_slideshow|mainpage_slideshow';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mainpage_slideshow';
  $ds_fieldsetting->view_mode = 'mainpage_slideshow';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|mainpage_slideshow|mainpage_slideshow'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_ct_slider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mainpage_slideshow|mainpage_slideshow';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'mainpage_slideshow';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => 'actions',
  );
  $export['node|mainpage_slideshow|mainpage_slideshow'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_ct_slider_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'mainpage_slideshow';
  $ds_view_mode->label = 'mainpage slideshow';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['mainpage_slideshow'] = $ds_view_mode;

  return $export;
}
