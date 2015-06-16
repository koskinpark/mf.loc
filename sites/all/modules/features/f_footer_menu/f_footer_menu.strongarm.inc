<?php
/**
 * @file
 * f_footer_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_footer_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    1 => 'devel',
    2 => 'features',
    3 => 'menu-footer-menu',
    4 => 'main-menu',
    5 => 'management',
    6 => 'navigation',
    7 => 'user-menu',
    8 => 'menu-catalog-menu',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'menu-catalog-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_default_icon';
  $strongarm->value = 'sites/all/modules/contrib/menu_icons/images/default_icon.png';
  $export['menu_icons_default_icon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_hide_titles';
  $strongarm->value = 0;
  $export['menu_icons_hide_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_image_folder';
  $strongarm->value = 'menu_icons';
  $export['menu_icons_image_folder'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_image_style_default';
  $strongarm->value = 'image_of_child_taxonomy_term';
  $export['menu_icons_image_style_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_position';
  $strongarm->value = 'left';
  $export['menu_icons_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_use_css';
  $strongarm->value = 1;
  $export['menu_icons_use_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 490,
    3 => 254,
    4 => 251,
    5 => 250,
    6 => 247,
    7 => 246,
    8 => 245,
    9 => 241,
    10 => 238,
    11 => 234,
    12 => 127,
    13 => 126,
    14 => 125,
    15 => 124,
    16 => 123,
    17 => 122,
    18 => 121,
    19 => 119,
    20 => 117,
    21 => 63,
    22 => 62,
    23 => 61,
    24 => 60,
    25 => 59,
    26 => 58,
    27 => 56,
    28 => 44,
    29 => 31,
    30 => 30,
    31 => 29,
    32 => 28,
    33 => 27,
    34 => 26,
    35 => 24,
    36 => 23,
    37 => 21,
    38 => 15,
    39 => 14,
    40 => 13,
    41 => 11,
    42 => 7,
    43 => 6,
    44 => 5,
    45 => 3,
    46 => 2,
    47 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_footer_type';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_footer_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_footer_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_footer_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_footer_menu'] = $strongarm;

  return $export;
}
