<?php
/**
 * @file
 * f_ct_catalog.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function f_ct_catalog_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sofas',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '03b3c589-3f57-4ebf-9600-4077fbd8b1c4',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'f8450b8a-0d74-4a00-83bb-468708cce348',
    ),
  );
  $terms[] = array(
    'name' => 'Mirrors & Art',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0840ff61-2471-447e-a5b4-bea6290425d5',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Case furniture',
    'description' => 'Buy our tables',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '08df812a-0eb5-4c4d-9030-62b98577cd7e',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Stools',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '1ee128bd-58b4-442a-a0b7-9e937748d443',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'f8450b8a-0d74-4a00-83bb-468708cce348',
    ),
  );
  $terms[] = array(
    'name' => 'Outdoor Accents',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2d5b37a1-880f-4e8b-858d-fbac02050333',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'ca919bc2-f6d6-450a-a54b-727b5e8dc535',
    ),
  );
  $terms[] = array(
    'name' => 'Kitchen & Tabletop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Wardrobes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '60672890-b2a0-4591-b84d-9092264ca5c0',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '08df812a-0eb5-4c4d-9030-62b98577cd7e',
    ),
  );
  $terms[] = array(
    'name' => 'Globally Inspired',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60c7663e-e515-47ea-8caa-07923e768b13',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    ),
  );
  $terms[] = array(
    'name' => 'Children\'s furniture',
    'description' => 'Buy our furniture for your office!',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '6476b63e-7f45-4dd4-b4d1-f3b27b97fa3d',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Table Linens',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71190f94-4d2f-4383-ad0a-d0d5943c42e6',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    ),
  );
  $terms[] = array(
    'name' => 'Serveware',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '76e87b36-559a-4859-92bc-f7f1a6df7704',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    ),
  );
  $terms[] = array(
    'name' => 'Shelves',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '77d13b1d-ee35-450d-9b97-046212252b30',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '08df812a-0eb5-4c4d-9030-62b98577cd7e',
    ),
  );
  $terms[] = array(
    'name' => 'Chairs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '8eab2c41-fe23-414c-9586-701046a0b438',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'f8450b8a-0d74-4a00-83bb-468708cce348',
    ),
  );
  $terms[] = array(
    'name' => 'Tabletop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9212b4fe-653d-490e-a25c-1d4b1b00ffaf',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    ),
  );
  $terms[] = array(
    'name' => 'Wall decor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'afbee465-f34e-4916-918b-9122161749f5',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Rooms',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c288d35e-a77f-4b93-8134-1fd4ce9bc012',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '6476b63e-7f45-4dd4-b4d1-f3b27b97fa3d',
    ),
  );
  $terms[] = array(
    'name' => 'Decorative Accents',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ca919bc2-f6d6-450a-a54b-727b5e8dc535',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Beds',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'cd8b926a-5124-4061-907f-ab4420c44b9e',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '6476b63e-7f45-4dd4-b4d1-f3b27b97fa3d',
    ),
  );
  $terms[] = array(
    'name' => 'Ottomans',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd68db77b-baa5-4f85-b6c1-83c38d4f3642',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'f8450b8a-0d74-4a00-83bb-468708cce348',
    ),
  );
  $terms[] = array(
    'name' => 'Cookware & Tools',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e61f725b-a1f7-49c2-b95b-92e2470a1e8c',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => '3f49c4eb-cb3d-4700-9f13-51fc18decba5',
    ),
  );
  $terms[] = array(
    'name' => 'Upholstered furniture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'f8450b8a-0d74-4a00-83bb-468708cce348',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
  );
  $terms[] = array(
    'name' => 'Indoor Accents',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f972038f-1622-4e25-9c6a-4913651a10be',
    'vocabulary_machine_name' => 'catalog',
    'field_images' => array(),
    'parent' => array(
      0 => 'ca919bc2-f6d6-450a-a54b-727b5e8dc535',
    ),
  );
  return $terms;
}