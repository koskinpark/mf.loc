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
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
