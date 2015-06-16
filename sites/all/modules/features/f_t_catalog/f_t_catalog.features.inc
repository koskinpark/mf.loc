<?php
/**
 * @file
 * f_t_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_t_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
