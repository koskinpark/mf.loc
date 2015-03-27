<?php
/**
 * @file
 * f_ct_slider.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_ct_slider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mainpage_slideshow|slider_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'slider_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
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
  $export['node|mainpage_slideshow|slider_mode'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_ct_slider_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'slider_mode';
  $ds_view_mode->label = 'Slider-mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['slider_mode'] = $ds_view_mode;

  return $export;
}
