<?php
/**
 * @file
 * f_ct_random_hp_product.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_random_hp_product_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_ct_random_hp_product_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
