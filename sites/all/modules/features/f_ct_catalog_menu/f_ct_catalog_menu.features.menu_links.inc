<?php
/**
 * @file
 * f_ct_catalog_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_ct_catalog_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-catalog-menu_beds:taxonomy/term/10
  $menu_links['menu-catalog-menu_beds:taxonomy/term/10'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Beds',
    'options' => array(
      'attributes' => array(
        'title' => 'Beds',
      ),
      'identifier' => 'menu-catalog-menu_beds:taxonomy/term/10',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_childrens-furniture:taxonomy/term/2',
  );
  // Exported menu link: menu-catalog-menu_case-furniture:taxonomy/term/3
  $menu_links['menu-catalog-menu_case-furniture:taxonomy/term/3'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Case furniture',
    'options' => array(
      'attributes' => array(
        'title' => 'Case furniture',
      ),
      'identifier' => 'menu-catalog-menu_case-furniture:taxonomy/term/3',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: menu-catalog-menu_chairs:taxonomy/term/5
  $menu_links['menu-catalog-menu_chairs:taxonomy/term/5'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Chairs',
    'options' => array(
      'attributes' => array(
        'title' => 'Chairs',
      ),
      'identifier' => 'menu-catalog-menu_chairs:taxonomy/term/5',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_upholstered-furniture:taxonomy/term/1',
  );
  // Exported menu link: menu-catalog-menu_childrens-furniture:taxonomy/term/2
  $menu_links['menu-catalog-menu_childrens-furniture:taxonomy/term/2'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Children\'s furniture',
    'options' => array(
      'attributes' => array(
        'title' => 'Children\'s furniture',
      ),
      'identifier' => 'menu-catalog-menu_childrens-furniture:taxonomy/term/2',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: menu-catalog-menu_ottomans:taxonomy/term/6
  $menu_links['menu-catalog-menu_ottomans:taxonomy/term/6'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Ottomans',
    'options' => array(
      'attributes' => array(
        'title' => 'Ottomans',
      ),
      'identifier' => 'menu-catalog-menu_ottomans:taxonomy/term/6',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_upholstered-furniture:taxonomy/term/1',
  );
  // Exported menu link: menu-catalog-menu_rooms:taxonomy/term/11
  $menu_links['menu-catalog-menu_rooms:taxonomy/term/11'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rooms',
    'options' => array(
      'attributes' => array(
        'title' => 'Rooms',
      ),
      'identifier' => 'menu-catalog-menu_rooms:taxonomy/term/11',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_childrens-furniture:taxonomy/term/2',
  );
  // Exported menu link: menu-catalog-menu_shelves:taxonomy/term/9
  $menu_links['menu-catalog-menu_shelves:taxonomy/term/9'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Shelves',
    'options' => array(
      'attributes' => array(
        'title' => 'Shelves',
      ),
      'identifier' => 'menu-catalog-menu_shelves:taxonomy/term/9',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_case-furniture:taxonomy/term/3',
  );
  // Exported menu link: menu-catalog-menu_sofas:taxonomy/term/4
  $menu_links['menu-catalog-menu_sofas:taxonomy/term/4'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sofas',
    'options' => array(
      'attributes' => array(
        'title' => 'Sofas',
      ),
      'identifier' => 'menu-catalog-menu_sofas:taxonomy/term/4',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_upholstered-furniture:taxonomy/term/1',
  );
  // Exported menu link: menu-catalog-menu_stools:taxonomy/term/7
  $menu_links['menu-catalog-menu_stools:taxonomy/term/7'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Stools',
    'options' => array(
      'attributes' => array(
        'title' => 'Stools',
      ),
      'identifier' => 'menu-catalog-menu_stools:taxonomy/term/7',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_upholstered-furniture:taxonomy/term/1',
  );
  // Exported menu link: menu-catalog-menu_upholstered-furniture:taxonomy/term/1
  $menu_links['menu-catalog-menu_upholstered-furniture:taxonomy/term/1'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Upholstered furniture',
    'options' => array(
      'attributes' => array(
        'title' => 'Upholstered furniture',
      ),
      'identifier' => 'menu-catalog-menu_upholstered-furniture:taxonomy/term/1',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
  );
  // Exported menu link: menu-catalog-menu_wardrobes:taxonomy/term/8
  $menu_links['menu-catalog-menu_wardrobes:taxonomy/term/8'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Wardrobes',
    'options' => array(
      'attributes' => array(
        'title' => 'Wardrobes',
      ),
      'identifier' => 'menu-catalog-menu_wardrobes:taxonomy/term/8',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_case-furniture:taxonomy/term/3',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Beds');
  t('Case furniture');
  t('Chairs');
  t('Children\'s furniture');
  t('Ottomans');
  t('Rooms');
  t('Shelves');
  t('Sofas');
  t('Stools');
  t('Upholstered furniture');
  t('Wardrobes');


  return $menu_links;
}
