<?php
/**
 * @file
 * f_ct_actions.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function f_ct_actions_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Qwerty',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bd2dd6a6-8c89-4f42-887c-91424d430a82',
  'type' => 'mainpage_slideshow',
  'language' => 'und',
  'created' => 1429702075,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '716612b6-81f9-40a8-b96f-38f1aaaac12d',
  'revision_uid' => 1,
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'spring-break.jpg',
        'uri' => 'public://spring-break.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1265960,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '7d56f41e-6917-4ce5-bd86-8a8cbb859518',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 900,
          'width' => 2500,
        ),
        'alt' => '',
        'title' => '',
        'width' => 2500,
        'height' => 900,
      ),
    ),
  ),
  'field_main_picture_of_action' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'w_01.jpg',
        'uri' => 'public://w_01.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 686775,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'e3db9da5-0598-4ed9-b275-7ee89d4fc467',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 3840,
          'width' => 960,
        ),
        'alt' => '',
        'title' => '',
        'width' => 960,
        'height' => 3840,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-04-22 11:27:55 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Mozomorfizm',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '91f4f494-def2-4a4c-a3a0-419cb357a0b6',
  'type' => 'mainpage_slideshow',
  'language' => 'en',
  'created' => 1430818638,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cfdaa58e-fb75-4765-876c-c8aedc68cf7f',
  'revision_uid' => 1,
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '7e4cdcfc2251d27f079ddeb5be5fb51c.jpg',
        'uri' => 'public://7e4cdcfc2251d27f079ddeb5be5fb51c.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 936835,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f3ac50c6-4c1b-4b60-8e29-2edd20b795ae',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1750,
          'width' => 4140,
        ),
        'alt' => '',
        'title' => '',
        'width' => 4140,
        'height' => 1750,
      ),
    ),
  ),
  'field_main_picture_of_action' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '53789_2_pr.adcontext.net_.jpg',
        'uri' => 'public://53789_2_pr.adcontext.net__0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 236443,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'e7b40a49-bf60-4709-bc07-070b88d24c21',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1654,
          'width' => 2338,
        ),
        'alt' => '',
        'title' => '',
        'width' => 2338,
        'height' => 1654,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-05-05 09:37:18 +0000',
);
  return $nodes;
}