<?php
/**
 * @file
 * f_ct_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_ct_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mainpage_slideshow';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'random_homepage_pictures' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'slider_mode' => array(
        'custom_settings' => TRUE,
      ),
      'mainpage_slideshow' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'footer_mode' => array(
        'custom_settings' => FALSE,
      ),
      'logotype' => array(
        'custom_settings' => FALSE,
      ),
      'more_viewed' => array(
        'custom_settings' => FALSE,
      ),
      'actions_page' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__mainpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mainpage_slideshow';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_mainpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mainpage_slideshow';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mainpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mainpage_slideshow';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_mainpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mainpage_slideshow';
  $strongarm->value = '1';
  $export['node_preview_mainpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mainpage_slideshow';
  $strongarm->value = 0;
  $export['node_submitted_mainpage_slideshow'] = $strongarm;

  return $export;
}
