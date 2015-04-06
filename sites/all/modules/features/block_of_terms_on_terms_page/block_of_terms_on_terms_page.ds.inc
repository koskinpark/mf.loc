<?php
/**
 * @file
 * block_of_terms_on_terms_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function block_of_terms_on_terms_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|catalog|terms_slideshow_on_terms_page';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'catalog';
  $ds_layout->view_mode = 'terms_slideshow_on_terms_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'field_images',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'field_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|catalog|terms_slideshow_on_terms_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function block_of_terms_on_terms_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'terms_slideshow_on_terms_page';
  $ds_view_mode->label = 'terms slideshow on terms page';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['terms_slideshow_on_terms_page'] = $ds_view_mode;

  return $export;
}
