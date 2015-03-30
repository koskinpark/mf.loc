<?php
/**
 * @file
 * footer_linker.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function footer_linker_taxonomy_default_vocabularies() {
  return array(
    'footer_linker' => array(
      'name' => 'Footer Linker',
      'machine_name' => 'footer_linker',
      'description' => 'Here is list of some links to other pages',
      'hierarchy' => 0,
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
