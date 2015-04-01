<?php
/**
 * @file
 * f_ct_catalog_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_ct_catalog_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-catalog-menu.
  $menus['menu-catalog-menu'] = array(
    'menu_name' => 'menu-catalog-menu',
    'title' => 'catalog menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('catalog menu');


  return $menus;
}
