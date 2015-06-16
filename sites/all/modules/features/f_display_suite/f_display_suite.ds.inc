<?php
/**
 * @file
 * f_display_suite.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_display_suite_ds_field_settings_info() {
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
  $ds_fieldsetting->id = 'node|mainpage_slideshow|mainpage_slideshow';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mainpage_slideshow';
  $ds_fieldsetting->view_mode = 'mainpage_slideshow';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|mainpage_slideshow|mainpage_slideshow'] = $ds_fieldsetting;

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
function f_display_suite_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|about_us|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'about_us';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_how_to_buy',
        1 => 'group_priority_quality',
        2 => 'group_personal_project',
        3 => 'field_personal_project_title',
        4 => 'group_delivery_and_installation',
        5 => 'field_personal_project_desc',
        6 => 'group_use_and_care',
        7 => 'group_priority_quality_main',
        8 => 'field_delivery_title',
        9 => 'group_how_to_buy_main',
        10 => 'field_priority_quality_title',
        11 => 'field_delivery_desc',
        12 => 'field_how_to_buy_title',
        13 => 'field_priority_quality_desc',
        14 => 'field_priority_quality_image',
        15 => 'field_how_to_buy_desc',
        16 => 'field_how_to_buy_image',
        17 => 'group_personal_project_main',
        18 => 'group_delivery_main',
        19 => 'group_use_and_care_main',
        20 => 'field_use_and_care_title',
        21 => 'field_delivery_more',
        22 => 'field_personal_project_image',
        23 => 'field_delivery_and_installation_',
        24 => 'field_use_and_care_desc',
        25 => 'field_use_and_care_image',
      ),
    ),
    'fields' => array(
      'group_how_to_buy' => 'ds_content',
      'group_priority_quality' => 'ds_content',
      'group_personal_project' => 'ds_content',
      'field_personal_project_title' => 'ds_content',
      'group_delivery_and_installation' => 'ds_content',
      'field_personal_project_desc' => 'ds_content',
      'group_use_and_care' => 'ds_content',
      'group_priority_quality_main' => 'ds_content',
      'field_delivery_title' => 'ds_content',
      'group_how_to_buy_main' => 'ds_content',
      'field_priority_quality_title' => 'ds_content',
      'field_delivery_desc' => 'ds_content',
      'field_how_to_buy_title' => 'ds_content',
      'field_priority_quality_desc' => 'ds_content',
      'field_priority_quality_image' => 'ds_content',
      'field_how_to_buy_desc' => 'ds_content',
      'field_how_to_buy_image' => 'ds_content',
      'group_personal_project_main' => 'ds_content',
      'group_delivery_main' => 'ds_content',
      'group_use_and_care_main' => 'ds_content',
      'field_use_and_care_title' => 'ds_content',
      'field_delivery_more' => 'ds_content',
      'field_personal_project_image' => 'ds_content',
      'field_delivery_and_installation_' => 'ds_content',
      'field_use_and_care_desc' => 'ds_content',
      'field_use_and_care_image' => 'ds_content',
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
  $export['node|about_us|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contacts|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contacts';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_pictures_group',
        1 => 'field_yandex_map',
        2 => 'field_picture_of_contacts',
        3 => 'field_more_picture',
        4 => 'group_contact_group',
        5 => 'field_address',
        6 => 'field_telephones',
        7 => 'field_opening_times',
      ),
    ),
    'fields' => array(
      'group_pictures_group' => 'ds_content',
      'field_yandex_map' => 'ds_content',
      'field_picture_of_contacts' => 'ds_content',
      'field_more_picture' => 'ds_content',
      'group_contact_group' => 'ds_content',
      'field_address' => 'ds_content',
      'field_telephones' => 'ds_content',
      'field_opening_times' => 'ds_content',
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
  $export['node|contacts|full'] = $ds_layout;

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
  $ds_layout->id = 'node|mainpage_slideshow|mainpage_slideshow';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mainpage_slideshow';
  $ds_layout->view_mode = 'mainpage_slideshow';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => 'actions',
  );
  $export['node|mainpage_slideshow|mainpage_slideshow'] = $ds_layout;

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
function f_display_suite_ds_view_modes_info() {
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
  $ds_view_mode->view_mode = 'mainpage_slideshow';
  $ds_view_mode->label = 'mainpage slideshow';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['mainpage_slideshow'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'other_actions';
  $ds_view_mode->label = 'other actions';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['other_actions'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'random_homepage_pictures';
  $ds_view_mode->label = 'random_homepage_pictures';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['random_homepage_pictures'] = $ds_view_mode;

  return $export;
}
