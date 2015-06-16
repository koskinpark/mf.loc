<?php
/**
 * @file
 * f_ct_about.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_ct_about_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delivery_and_installation|node|about_us|full';
  $field_group->group_name = 'group_delivery_and_installation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Delivery and installation',
    'weight' => '3',
    'children' => array(
      0 => 'field_delivery_and_installation_',
      1 => 'field_delivery_more',
      2 => 'group_delivery_main',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Delivery and installation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-delivery-and-installation field-group',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_delivery_and_installation|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delivery_main|node|about_us|full';
  $field_group->group_name = 'group_delivery_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_delivery_and_installation';
  $field_group->data = array(
    'label' => 'Delivery main',
    'weight' => '11',
    'children' => array(
      0 => 'field_delivery_title',
      1 => 'field_delivery_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Delivery main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main-text-of-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_delivery_main|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_how_to_buy_main|node|about_us|full';
  $field_group->group_name = 'group_how_to_buy_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_how_to_buy';
  $field_group->data = array(
    'label' => 'How to buy main',
    'weight' => '6',
    'children' => array(
      0 => 'field_how_to_buy_title',
      1 => 'field_how_to_buy_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How to buy main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main-text-of-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_how_to_buy_main|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_how_to_buy|node|about_us|full';
  $field_group->group_name = 'group_how_to_buy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How to buy',
    'weight' => '0',
    'children' => array(
      0 => 'field_how_to_buy_image',
      1 => 'group_how_to_buy_main',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'How to buy',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-how-to-buy field-group',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_how_to_buy|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_project_main|node|about_us|full';
  $field_group->group_name = 'group_personal_project_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_personal_project';
  $field_group->data = array(
    'label' => 'Personal project main',
    'weight' => '11',
    'children' => array(
      0 => 'field_personal_project_title',
      1 => 'field_personal_project_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal project main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main-text-of-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_personal_project_main|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_project|node|about_us|full';
  $field_group->group_name = 'group_personal_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal project',
    'weight' => '2',
    'children' => array(
      0 => 'field_personal_project_image',
      1 => 'group_personal_project_main',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Personal project',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-personal-project field-group',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_personal_project|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_priority_quality_main|node|about_us|full';
  $field_group->group_name = 'group_priority_quality_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_priority_quality';
  $field_group->data = array(
    'label' => 'Priority quality main',
    'weight' => '5',
    'children' => array(
      0 => 'field_priority_quality_title',
      1 => 'field_priority_quality_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Priority quality main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main-text-of-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_priority_quality_main|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_priority_quality|node|about_us|full';
  $field_group->group_name = 'group_priority_quality';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Priority quality',
    'weight' => '1',
    'children' => array(
      0 => 'field_priority_quality_image',
      1 => 'group_priority_quality_main',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Priority quality',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-priority-quality field-group',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_priority_quality|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use_and_care_main|node|about_us|full';
  $field_group->group_name = 'group_use_and_care_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_use_and_care';
  $field_group->data = array(
    'label' => 'Use and Care main',
    'weight' => '11',
    'children' => array(
      0 => 'field_use_and_care_title',
      1 => 'field_use_and_care_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Use and Care main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main-text-of-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_use_and_care_main|node|about_us|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use_and_care|node|about_us|full';
  $field_group->group_name = 'group_use_and_care';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about_us';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Use and Care',
    'weight' => '4',
    'children' => array(
      0 => 'field_use_and_care_image',
      1 => 'group_use_and_care_main',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Use and Care',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-use-and-care field-group',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_use_and_care|node|about_us|full'] = $field_group;

  return $export;
}
