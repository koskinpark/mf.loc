<?php
/**
 * @file
 * contacts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function contacts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_group|node|contacts|full';
  $field_group->group_name = 'group_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contacts';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'contact group',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
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

  return $export;
}
