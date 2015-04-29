<?php
/**
 * @file
 * block_of_subterms_on_terms_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function block_of_subterms_on_terms_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-catalog-field_small_image_on_parent_page'
  $field_instances['taxonomy_term-catalog-field_small_image_on_parent_page'] = array(
    'bundle' => 'catalog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_small_image_on_parent_page',
    'label' => 'Small image on parent page',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 111,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Small image on parent page');

  return $field_instances;
}
