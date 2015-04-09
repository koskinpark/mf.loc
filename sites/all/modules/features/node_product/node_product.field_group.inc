<?php
/**
 * @file
 * node_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function node_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_product|node|product|default';
  $field_group->group_name = 'group_description_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description of product',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_cost',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description of product',
      'instance_settings' => array(
        'id' => 'description-product-block',
        'classes' => 'group-description-product field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_description_product|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_image|node|product|default';
  $field_group->group_name = 'group_product_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other information about product',
    'weight' => '1',
    'children' => array(
      0 => 'field_pictures',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other information about product',
      'instance_settings' => array(
        'id' => 'description-product-image',
        'classes' => 'group-product-image field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_image|node|product|default'] = $field_group;

  return $export;
}
