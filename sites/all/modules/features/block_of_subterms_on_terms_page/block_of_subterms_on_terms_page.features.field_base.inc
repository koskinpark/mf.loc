<?php
/**
 * @file
 * block_of_subterms_on_terms_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function block_of_subterms_on_terms_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_small_image_on_parent_page'
  $field_bases['field_small_image_on_parent_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_small_image_on_parent_page',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
