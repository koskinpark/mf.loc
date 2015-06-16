<?php
/**
 * @file
 * f_ct_contacts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_ct_contacts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_group|node|contacts|full';
  $field_group->group_name = 'group_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contacts';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pictures_group';
  $field_group->data = array(
    'label' => 'contact group',
    'weight' => '4',
    'children' => array(
      0 => 'field_telephones',
      1 => 'field_opening_times',
      2 => 'field_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'contact group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_group|node|contacts|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pictures_group|node|contacts|full';
  $field_group->group_name = 'group_pictures_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contacts';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pictures group',
    'weight' => '0',
    'children' => array(
      0 => 'field_picture_of_contacts',
      1 => 'field_more_picture',
      2 => 'group_contact_group',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pictures group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pictures-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pictures_group|node|contacts|full'] = $field_group;

  return $export;
}
