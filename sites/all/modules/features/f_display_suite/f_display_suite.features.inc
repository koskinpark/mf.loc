<?php
/**
 * @file
 * f_display_suite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_display_suite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
