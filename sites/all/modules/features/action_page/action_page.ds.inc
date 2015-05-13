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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mainpage_slideshow|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mainpage_slideshow';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|mainpage_slideshow|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mainpage_slideshow|other_actions';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mainpage_slideshow';
  $ds_fieldsetting->view_mode = 'other_actions';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|mainpage_slideshow|other_actions'] = $ds_fieldsetting;

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mainpage_slideshow|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_action',
        1 => 'field_image_for_background',
        2 => 'group_main_desc_of_action',
        3 => 'title',
        4 => 'field_image_for_title_of_action',
        5 => 'field_image_1_of_action',
        6 => 'group_block_of_image_1',
        7 => 'group_block_of_image_2',
        8 => 'field_body_1_of_action',
        9 => 'field_image_2_of_action',
        10 => 'body',
        11 => 'field_body_2_of_action',
        12 => 'field_last_information_about_act',
      ),
    ),
    'fields' => array(
      'group_action' => 'ds_content',
      'field_image_for_background' => 'ds_content',
      'group_main_desc_of_action' => 'ds_content',
      'title' => 'ds_content',
      'field_image_for_title_of_action' => 'ds_content',
      'field_image_1_of_action' => 'ds_content',
      'group_block_of_image_1' => 'ds_content',
      'group_block_of_image_2' => 'ds_content',
      'field_body_1_of_action' => 'ds_content',
      'field_image_2_of_action' => 'ds_content',
      'body' => 'ds_content',
      'field_body_2_of_action' => 'ds_content',
      'field_last_information_about_act' => 'ds_content',
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
  $export['node|mainpage_slideshow|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mainpage_slideshow|other_actions';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'other_actions';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_images',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_images' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|mainpage_slideshow|other_actions'] = $ds_layout;

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

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'other_actions';
  $ds_view_mode->label = 'other actions';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['other_actions'] = $ds_view_mode;

  return $export;
}
