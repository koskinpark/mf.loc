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
  // Exported menu link: menu-catalog-menu_cookware--tools:taxonomy/term/14
  $menu_links['menu-catalog-menu_cookware--tools:taxonomy/term/14'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Cookware & Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Cookware & Tools',
      ),
      'identifier' => 'menu-catalog-menu_cookware--tools:taxonomy/term/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
  );
  // Exported menu link: menu-catalog-menu_decorative-accents:taxonomy/term/24
  $menu_links['menu-catalog-menu_decorative-accents:taxonomy/term/24'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/24',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Decorative Accents',
    'options' => array(
      'attributes' => array(
        'title' => 'Decorative Accents',
      ),
      'identifier' => 'menu-catalog-menu_decorative-accents:taxonomy/term/24',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-catalog-menu_globally-inspired:taxonomy/term/20
  $menu_links['menu-catalog-menu_globally-inspired:taxonomy/term/20'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/20',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Globally Inspired',
    'options' => array(
      'attributes' => array(
        'title' => 'Globally Inspired',
      ),
      'identifier' => 'menu-catalog-menu_globally-inspired:taxonomy/term/20',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
  );
  // Exported menu link: menu-catalog-menu_indoor-accents:taxonomy/term/25
  $menu_links['menu-catalog-menu_indoor-accents:taxonomy/term/25'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/25',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Indoor Accents',
    'options' => array(
      'attributes' => array(
        'title' => 'Indoor Accents',
      ),
      'identifier' => 'menu-catalog-menu_indoor-accents:taxonomy/term/25',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_decorative-accents:taxonomy/term/24',
  );
  // Exported menu link: menu-catalog-menu_kitchen--tabletop:taxonomy/term/12
  $menu_links['menu-catalog-menu_kitchen--tabletop:taxonomy/term/12'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Kitchen & Tabletop',
    'options' => array(
      'attributes' => array(
        'title' => 'Kitchen & Tabletop',
      ),
      'identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-catalog-menu_mirrors--art:taxonomy/term/22
  $menu_links['menu-catalog-menu_mirrors--art:taxonomy/term/22'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/22',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Mirrors & Art',
    'options' => array(
      'attributes' => array(
        'title' => 'Mirrors & Art',
      ),
      'identifier' => 'menu-catalog-menu_mirrors--art:taxonomy/term/22',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
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
  // Exported menu link: menu-catalog-menu_outdoor-accents:taxonomy/term/26
  $menu_links['menu-catalog-menu_outdoor-accents:taxonomy/term/26'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/26',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Outdoor Accents',
    'options' => array(
      'attributes' => array(
        'title' => 'Outdoor Accents',
      ),
      'identifier' => 'menu-catalog-menu_outdoor-accents:taxonomy/term/26',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_decorative-accents:taxonomy/term/24',
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
  // Exported menu link: menu-catalog-menu_serveware:taxonomy/term/13
  $menu_links['menu-catalog-menu_serveware:taxonomy/term/13'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/13',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Serveware',
    'options' => array(
      'attributes' => array(
        'title' => 'Serveware',
      ),
      'identifier' => 'menu-catalog-menu_serveware:taxonomy/term/13',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
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
  // Exported menu link: menu-catalog-menu_table-linens:taxonomy/term/15
  $menu_links['menu-catalog-menu_table-linens:taxonomy/term/15'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Table Linens',
    'options' => array(
      'attributes' => array(
        'title' => 'Table Linens',
      ),
      'identifier' => 'menu-catalog-menu_table-linens:taxonomy/term/15',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
  );
  // Exported menu link: menu-catalog-menu_tabletop:taxonomy/term/16
  $menu_links['menu-catalog-menu_tabletop:taxonomy/term/16'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/16',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tabletop',
    'options' => array(
      'attributes' => array(
        'title' => 'Tabletop',
      ),
      'identifier' => 'menu-catalog-menu_tabletop:taxonomy/term/16',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-catalog-menu_kitchen--tabletop:taxonomy/term/12',
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
  // Exported menu link: menu-catalog-menu_wall-decor:taxonomy/term/23
  $menu_links['menu-catalog-menu_wall-decor:taxonomy/term/23'] = array(
    'menu_name' => 'menu-catalog-menu',
    'link_path' => 'taxonomy/term/23',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Wall decor',
    'options' => array(
      'attributes' => array(
        'title' => 'Wall decor',
      ),
      'identifier' => 'menu-catalog-menu_wall-decor:taxonomy/term/23',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
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
  t('Cookware & Tools');
  t('Decorative Accents');
  t('Globally Inspired');
  t('Indoor Accents');
  t('Kitchen & Tabletop');
  t('Mirrors & Art');
  t('Ottomans');
  t('Outdoor Accents');
  t('Rooms');
  t('Serveware');
  t('Shelves');
  t('Sofas');
  t('Stools');
  t('Table Linens');
  t('Tabletop');
  t('Upholstered furniture');
  t('Wall decor');
  t('Wardrobes');


  return $menu_links;
}
