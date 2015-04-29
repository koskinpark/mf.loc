<?php
/**
 * @file
 * f_mainpage_fixed_image_block.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function f_mainpage_fixed_image_block_image_default_styles() {
  $styles = array();

  // Exported image style: mainpage_images_block.
  $styles['mainpage_images_block'] = array(
    'label' => 'Mainpage images block',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 310,
          'height' => 310,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
