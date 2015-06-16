<?php
/**
 * @file
 * f_taxonomy_menu_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_taxonomy_menu_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_footer_menu';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_footer_menu';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_footer_menu';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_footer_menu';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_footer_menu';
  $strongarm->value = 'menu-footer-menu';
  $export['taxonomy_menu_vocab_menu_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_footer_menu';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_footer_menu';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_footer_menu';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_footer_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_footer_menu';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_footer_menu'] = $strongarm;

  return $export;
}
