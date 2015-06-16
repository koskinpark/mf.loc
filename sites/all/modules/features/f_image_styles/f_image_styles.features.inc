<?php
/**
 * @file
 * f_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function f_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: colorbox_thumbnails.
  $styles['colorbox_thumbnails'] = array(
    'label' => 'Colorbox thumbnails',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 40,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_width_image_background.
  $styles['full_width_image_background'] = array(
    'label' => 'Full Width Image Background',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1366,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_for_other_pages__about__contacts__etc__.
  $styles['image_for_other_pages__about__contacts__etc__'] = array(
    'label' => 'Image for other pages (about, contacts, etc.)',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_of_child_taxonomy_term.
  $styles['image_of_child_taxonomy_term'] = array(
    'label' => 'Image of child taxonomy term',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 170,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_on_taxonomy_page.
  $styles['image_on_taxonomy_page'] = array(
    'label' => 'Image on taxonomy page',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logotype.
  $styles['logotype'] = array(
    'label' => 'logotype',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: main_image_of_action_page.
  $styles['main_image_of_action_page'] = array(
    'label' => 'Main image of action page',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mainpage_images_block.
  $styles['mainpage_images_block'] = array(
    'label' => 'Mainpage images block',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: most_viewed_image_style.
  $styles['most_viewed_image_style'] = array(
    'label' => 'most viewed image style',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_of_product_image.
  $styles['node_of_product_image'] = array(
    'label' => 'Node of product image',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: other_actions.
  $styles['other_actions'] = array(
    'label' => 'other actions',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pictures_for_action_page.
  $styles['pictures_for_action_page'] = array(
    'label' => 'pictures for action page',
    'effects' => array(),
  );

  // Exported image style: slideshow_on_mp.
  $styles['slideshow_on_mp'] = array(
    'label' => 'Slideshow on mp',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

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

  // Exported image style: small_pictures_of_node_page.
  $styles['small_pictures_of_node_page'] = array(
    'label' => 'Small pictures of node page',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnails_for_slideshow_on_mainpage.
  $styles['thumbnails_for_slideshow_on_mainpage'] = array(
    'label' => 'Thumbnails for slideshow on mainpage',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
