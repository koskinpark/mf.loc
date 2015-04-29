<?php
/**
 * @file
 * f_ct_slider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_ct_slider_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_part_of_action|node|mainpage_slideshow|form';
  $field_group->group_name = 'group_first_part_of_action';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'First part of action',
    'weight' => '4',
    'children' => array(
      0 => 'field_image_1_of_action',
      1 => 'field_body_1_of_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'First part of action',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-first-part-of-action field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_first_part_of_action|node|mainpage_slideshow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_part_of_action|node|mainpage_slideshow|form';
  $field_group->group_name = 'group_second_part_of_action';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mainpage_slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Second part of action',
    'weight' => '5',
    'children' => array(
      0 => 'field_image_2_of_action',
      1 => 'field_body_2_of_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-second-part-of-action field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_second_part_of_action|node|mainpage_slideshow|form'] = $field_group;

  return $export;
}
