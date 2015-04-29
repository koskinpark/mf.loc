<?php
/**
 * @file
 * f_ct_product.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_ct_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|random_homepage_pictures';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'random_homepage_pictures';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_pictures',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_pictures' => 'ds_content',
    ),
    'limit' => array(
      'field_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
  );
  $export['node|product|random_homepage_pictures'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_ct_product_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'random_homepage_pictures';
  $ds_view_mode->label = 'random homepage pictures';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['random_homepage_pictures'] = $ds_view_mode;

  return $export;
}
