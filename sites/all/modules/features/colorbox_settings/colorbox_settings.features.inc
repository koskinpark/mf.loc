<?php
/**
 * @file
 * colorbox_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function colorbox_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function colorbox_settings_image_default_styles() {
  $styles = array();

  // Exported image style: colorbox_images.
  $styles['colorbox_images'] = array(
    'label' => 'Colorbox images',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => 620,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_pictures_in_colorbox.
  $styles['small_pictures_in_colorbox'] = array(
    'label' => 'small pictures in colorbox',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 67,
          'height' => 40,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
