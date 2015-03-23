<?php
/**
 * @file
 * f_nice_menu_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_nice_menu_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
