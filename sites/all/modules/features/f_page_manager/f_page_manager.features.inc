<?php
/**
 * @file
 * f_page_manager.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_page_manager_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
