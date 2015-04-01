<?php
/**
 * @file
 * footer_linker.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function footer_linker_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Contacts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '275660f5-fcb4-4095-adde-7fc6aafa13ea',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Developers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '38bad9a1-4905-4e99-972d-cee75eae5177',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'To Top',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '46e2ad1d-c6b8-4542-9e33-b89e9d32074a',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'About us',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '872e984a-af8d-40ac-b77a-2430ddc6fa62',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Feedback',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'b64070a1-11d3-4531-a9cd-73d1779456e5',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Actions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd6cc224e-63ed-499b-8f6a-385ecf864b66',
    'vocabulary_machine_name' => 'footer_linker',
    'url_alias' => array(),
  );
  return $terms;
}
