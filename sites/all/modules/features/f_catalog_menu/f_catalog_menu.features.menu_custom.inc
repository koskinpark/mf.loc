<?php
/**
 * @file
 * f_catalog_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_catalog_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-catalog-menu.
  $menus['menu-catalog-menu'] = array(
    'menu_name' => 'menu-catalog-menu',
    'title' => 'catalog menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('catalog menu');


  return $menus;
}
