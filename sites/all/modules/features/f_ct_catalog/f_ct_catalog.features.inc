<?php
/**
 * @file
 * f_ct_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
