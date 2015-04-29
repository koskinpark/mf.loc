<?php
/**
 * @file
 * block_of_subterms_on_terms_page.features.inc
 */

/**
 * Implements hook_views_api().
 */
function block_of_subterms_on_terms_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function block_of_subterms_on_terms_page_image_default_styles() {
  $styles = array();

  // Exported image style: small_pictures_for_subterms.
  $styles['small_pictures_for_subterms'] = array(
    'label' => 'small pictures for subterms',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
