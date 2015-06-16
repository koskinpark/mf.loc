<?php
/**
 * @file
 * f_taxonomy_csv.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_taxonomy_csv_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
