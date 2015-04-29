<?php
/**
 * @file
 * about_us.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function about_us_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_group|node|about_us|full';
  $field_group->group_name = 'group_about_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'about us group',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'about us group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-about-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_about_group|node|about_us|full'] = $field_group;

  return $export;
}
