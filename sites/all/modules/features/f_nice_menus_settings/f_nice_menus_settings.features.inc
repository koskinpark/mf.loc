<?php
/**
 * @file
 * f_nice_menus_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_nice_menus_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
