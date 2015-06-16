<?php
/**
 * @file
 * f_ct_actions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_ct_actions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-mainpage_slideshow-field_images'
  $field_instances['node-mainpage_slideshow-field_images'] = array(
    'bundle' => 'mainpage_slideshow',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'actions_page' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'mainpage_image_slideshow',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'mainpage_slideshow' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'mainpage_image_slideshow',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'other_actions' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'other_actions',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'slider_mode' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'mainpage_image_slideshow',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'Image for slideshow on mainpage',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'collapsible' => 3,
        'croparea' => '0x0',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
        'resolution' => '640x480',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-mainpage_slideshow-field_main_picture_of_action'
  $field_instances['node-mainpage_slideshow-field_main_picture_of_action'] = array(
    'bundle' => 'mainpage_slideshow',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'actions_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 9,
      ),
      'mainpage_slideshow' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'other_actions' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_picture_of_action',
    'label' => 'Main picture of action',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'main_image_of_action_page',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image for slideshow on mainpage');
  t('Main picture of action');

  return $field_instances;
}
