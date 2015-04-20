<?php
/**
 * @file
 * action_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function action_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mainpage_slideshow|actions_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mainpage_slideshow';
  $ds_fieldsetting->view_mode = 'actions_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|mainpage_slideshow|actions_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function action_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mainpage_slideshow|actions_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'actions_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_image_for_title_of_action',
        2 => 'body',
        3 => 'field_image_1_of_action',
        4 => 'field_body_1_of_action',
        5 => 'field_image_2_of_action',
        6 => 'field_body_2_of_action',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_image_for_title_of_action' => 'ds_content',
      'body' => 'ds_content',
      'field_image_1_of_action' => 'ds_content',
      'field_body_1_of_action' => 'ds_content',
      'field_image_2_of_action' => 'ds_content',
      'field_body_2_of_action' => 'ds_content',
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
  $export['node|mainpage_slideshow|actions_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function action_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'actions_page';
  $ds_view_mode->label = 'actions page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['actions_page'] = $ds_view_mode;

  return $export;
}
