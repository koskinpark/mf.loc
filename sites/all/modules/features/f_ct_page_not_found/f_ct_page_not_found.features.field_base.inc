<?php
/**
 * @file
 * f_ct_page_not_found.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function f_ct_page_not_found_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_page_not_found_bg'
  $field_bases['field_page_not_found_bg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_not_found_bg',
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
