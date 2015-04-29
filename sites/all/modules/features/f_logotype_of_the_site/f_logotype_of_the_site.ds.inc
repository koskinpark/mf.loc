<?php
/**
 * @file
 * f_logotype_of_the_site.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function f_logotype_of_the_site_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'logotype';
  $ds_view_mode->label = 'Logotype';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['logotype'] = $ds_view_mode;

  return $export;
}
