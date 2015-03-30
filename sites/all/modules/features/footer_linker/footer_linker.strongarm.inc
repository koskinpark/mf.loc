<?php
/**
 * @file
 * footer_linker.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function footer_linker_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_taxonomy_panel';
  $strongarm->value = 0;
  $export['comment_anonymous_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_taxonomy_panel';
  $strongarm->value = 1;
  $export['comment_default_mode_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_taxonomy_panel';
  $strongarm->value = '50';
  $export['comment_default_per_page_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_taxonomy_panel';
  $strongarm->value = 1;
  $export['comment_form_location_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_taxonomy_panel';
  $strongarm->value = '1';
  $export['comment_preview_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_taxonomy_panel';
  $strongarm->value = 0;
  $export['comment_subject_field_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_taxonomy_panel';
  $strongarm->value = '2';
  $export['comment_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_taxonomy_panel';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_taxonomy_panel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_taxonomy_panel';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_taxonomy_panel';
  $strongarm->value = '1';
  $export['node_preview_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_taxonomy_panel';
  $strongarm->value = 0;
  $export['node_submitted_taxonomy_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_footer_linker';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_footer_linker';
  $strongarm->value = 1;
  $export['taxonomy_menu_expanded_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_catalog';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_footer_linker';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_footer_linker';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_footer_linker';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_menu_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_footer_linker';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_footer_linker';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_footer_linker';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_footer_linker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_footer_linker';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_footer_linker'] = $strongarm;

  return $export;
}