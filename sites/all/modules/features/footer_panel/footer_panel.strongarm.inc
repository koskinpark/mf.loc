<?php
/**
 * @file
 * footer_panel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function footer_panel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_footer_type';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_footer_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_footer_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_footer_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_footer_type';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_footer_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_footer_type';
  $strongarm->value = 0;
  $export['node_submitted_footer_type'] = $strongarm;

  return $export;
}
