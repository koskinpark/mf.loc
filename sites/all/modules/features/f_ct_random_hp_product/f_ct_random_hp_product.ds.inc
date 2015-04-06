<?php
/**
 * @file
 * f_ct_random_hp_product.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_ct_random_hp_product_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|random_homepage_pictures';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'random_homepage_pictures';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product|random_homepage_pictures'] = $ds_fieldsetting;

  return $export;
}
