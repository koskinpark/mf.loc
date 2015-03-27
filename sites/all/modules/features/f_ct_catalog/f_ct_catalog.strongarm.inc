<?php
/**
 * @file
 * f_ct_catalog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_ct_catalog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_catalog';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_catalog';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_catalog';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_catalog';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_catalog';
  $strongarm->value = 'menu-catalog-menu';
  $export['taxonomy_menu_vocab_menu_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_catalog';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_catalog';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_catalog';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_catalog'] = $strongarm;

  return $export;
}
