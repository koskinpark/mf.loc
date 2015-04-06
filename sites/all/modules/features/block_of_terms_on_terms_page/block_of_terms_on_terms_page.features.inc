<?php
/**
 * @file
 * block_of_terms_on_terms_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function block_of_terms_on_terms_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function block_of_terms_on_terms_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function block_of_terms_on_terms_page_image_default_styles() {
  $styles = array();

  // Exported image style: image_for_title_of_taxonomy_term.
  $styles['image_for_title_of_taxonomy_term'] = array(
    'label' => 'Image for title of taxonomy term',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
