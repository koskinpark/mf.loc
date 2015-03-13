<?php
/**
 * @file
 * f_vocabulary_catalog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_vocabulary_catalog_taxonomy_default_vocabularies() {
  return array(
    'catalog' => array(
      'name' => 'Catalog',
      'machine_name' => 'catalog',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
