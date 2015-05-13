<?php
/**
 * @file
 * action_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function action_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_action|node|mainpage_slideshow|full';
  $field_group->group_name = 'group_action';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Action',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_for_background',
      1 => 'field_last_information_about_act',
      2 => 'group_main_desc_of_action',
      3 => 'group_block_of_image_1',
      4 => 'group_block_of_image_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Action',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-action field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_action|node|mainpage_slideshow|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_of_image_1|node|mainpage_slideshow|full';
  $field_group->group_name = 'group_block_of_image_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_action';
  $field_group->data = array(
    'label' => 'block of image 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_1_of_action',
      1 => 'field_body_1_of_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'block of image 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-block-of-image-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_block_of_image_1|node|mainpage_slideshow|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_of_image_2|node|mainpage_slideshow|full';
  $field_group->group_name = 'group_block_of_image_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_action';
  $field_group->data = array(
    'label' => 'block of image 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_2_of_action',
      1 => 'field_body_2_of_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'block of image 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-block-of-image-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_block_of_image_2|node|mainpage_slideshow|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_desc_of_action|node|mainpage_slideshow|full';
  $field_group->group_name = 'group_main_desc_of_action';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_action';
  $field_group->data = array(
    'label' => 'Main description of action',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_image_for_title_of_action',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main description of action',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-main-desc-of-action field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_desc_of_action|node|mainpage_slideshow|full'] = $field_group;

  return $export;
}
