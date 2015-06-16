<?php
/**
 * @file
 * f_ct_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_ct_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_product|node|product|full';
  $field_group->group_name = 'group_description_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description of product',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_cost',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description of product',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-description-product field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_description_product|node|product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_group|node|product|full';
  $field_group->group_name = 'group_image_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_image';
  $field_group->data = array(
    'label' => 'Image group',
    'weight' => '5',
    'children' => array(
      0 => 'field_pictures',
      1 => 'one_more_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_group|node|product|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_image|node|product|full';
  $field_group->group_name = 'group_product_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other information about product',
    'weight' => '2',
    'children' => array(
      0 => 'group_image_group',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other information about product',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-product-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_image|node|product|full'] = $field_group;

  return $export;
}
