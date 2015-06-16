<?php
/**
 * @file
 * f_yandexmap_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_yandexmap_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_ymap_debug_mode';
  $strongarm->value = 0;
  $export['geofield_ymap_debug_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_ymap_preset';
  $strongarm->value = '';
  $export['geofield_ymap_preset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_ymap_presets_path';
  $strongarm->value = '';
  $export['geofield_ymap_presets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_ymap_use_loader';
  $strongarm->value = 1;
  $export['geofield_ymap_use_loader'] = $strongarm;

  return $export;
}
