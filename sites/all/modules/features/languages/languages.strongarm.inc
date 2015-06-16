<?php
/**
 * @file
 * languages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function languages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_language_list';
  $strongarm->value = '4';
  $export['i18n_language_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'plain_text' => 'plain_text',
    'filtered_html' => 0,
    'full_html' => 0,
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1432290459;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'admin_menu' => array(
      'ru' => (object) array(
        'name' => 'admin_menu',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-rc5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'admin_menu',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'ru',
            'version' => '7.x-3.0-rc5',
            'type' => 'remote',
            'filename' => 'admin_menu-7.x-3.0-rc5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/admin_menu/admin_menu-7.x-3.0-rc5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'ru',
            'version' => '7.x-3.0-rc5',
            'type' => 'local',
            'filename' => 'admin_menu-7.x-3.0-rc5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://admin_menu-7.x-3.0-rc5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'colorbox' => array(
      'ru' => (object) array(
        'name' => 'colorbox',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'colorbox',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'colorbox',
            'langcode' => 'ru',
            'version' => '7.x-2.8',
            'type' => 'remote',
            'filename' => 'colorbox-7.x-2.8.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/colorbox/colorbox-7.x-2.8.ru.po',
          ),
          'local' => (object) array(
            'project' => 'colorbox',
            'langcode' => 'ru',
            'version' => '7.x-2.8',
            'type' => 'local',
            'filename' => 'colorbox-7.x-2.8.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://colorbox-7.x-2.8.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'colorbox_node' => array(
      'ru' => (object) array(
        'name' => 'colorbox_node',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'colorbox_node',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'colorbox_node',
            'langcode' => 'ru',
            'version' => '7.x-3.5',
            'type' => 'remote',
            'filename' => 'colorbox_node-7.x-3.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/colorbox_node/colorbox_node-7.x-3.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'colorbox_node',
            'langcode' => 'ru',
            'version' => '7.x-3.5',
            'type' => 'local',
            'filename' => 'colorbox_node-7.x-3.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://colorbox_node-7.x-3.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'ctools' => array(
      'ru' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.6.ru.po',
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.6.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://ctools-7.x-1.6.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'data_export_import' => array(
      'ru' => (object) array(
        'name' => 'data_export_import',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'data_export_import',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'data_export_import',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'data_export_import-7.x-1.7.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/data_export_import/data_export_import-7.x-1.7.ru.po',
          ),
          'local' => (object) array(
            'project' => 'data_export_import',
            'langcode' => 'ru',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'data_export_import-7.x-1.7.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://data_export_import-7.x-1.7.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'devel' => array(
      'ru' => (object) array(
        'name' => 'devel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'devel',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'devel',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'devel-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/devel/devel-7.x-1.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'devel',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'devel-7.x-1.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://devel-7.x-1.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'diff' => array(
      'ru' => (object) array(
        'name' => 'diff',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'diff',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'diff',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'diff-7.x-3.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/diff/diff-7.x-3.2.ru.po',
          ),
          'local' => (object) array(
            'project' => 'diff',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'diff-7.x-3.2.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://diff-7.x-3.2.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'drupal' => array(
      'ru' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.34',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ru',
            'version' => '7.34',
            'type' => 'remote',
            'filename' => 'drupal-7.34.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.34.ru.po',
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'ru',
            'version' => '7.34',
            'type' => 'local',
            'filename' => 'drupal-7.34.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://drupal-7.34.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'ds' => array(
      'ru' => (object) array(
        'name' => 'ds',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ds',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ds',
            'langcode' => 'ru',
            'version' => '7.x-2.7',
            'type' => 'remote',
            'filename' => 'ds-7.x-2.7.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ds/ds-7.x-2.7.ru.po',
          ),
          'local' => (object) array(
            'project' => 'ds',
            'langcode' => 'ru',
            'version' => '7.x-2.7',
            'type' => 'local',
            'filename' => 'ds-7.x-2.7.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://ds-7.x-2.7.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'entity' => array(
      'ru' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.ru.po',
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://entity-7.x-1.6.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'entityreference' => array(
      'ru' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.ru.po',
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://entityreference-7.x-1.1.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'facetapi' => array(
      'ru' => (object) array(
        'name' => 'facetapi',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'facetapi',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'facetapi',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'facetapi-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/facetapi/facetapi-7.x-1.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'facetapi',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'facetapi-7.x-1.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://facetapi-7.x-1.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'features' => array(
      'ru' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'ru',
            'version' => '7.x-2.4',
            'type' => 'remote',
            'filename' => 'features-7.x-2.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.4.ru.po',
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'ru',
            'version' => '7.x-2.4',
            'type' => 'local',
            'filename' => 'features-7.x-2.4.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://features-7.x-2.4.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'feeds' => array(
      'ru' => (object) array(
        'name' => 'feeds',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-alpha8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '0',
        'project' => 'feeds',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'feeds',
            'langcode' => 'ru',
            'version' => '7.x-2.0-alpha8',
            'type' => 'remote',
            'filename' => 'feeds-7.x-2.0-alpha8.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/feeds/feeds-7.x-2.0-alpha8.ru.po',
          ),
          'local' => (object) array(
            'project' => 'feeds',
            'langcode' => 'ru',
            'version' => '7.x-2.0-alpha8',
            'type' => 'local',
            'filename' => 'feeds-7.x-2.0-alpha8.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://feeds-7.x-2.0-alpha8.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'field_group' => array(
      'ru' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.ru.po',
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://field_group-7.x-1.4.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'file_entity' => array(
      'ru' => (object) array(
        'name' => 'file_entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-beta1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'file_entity',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'file_entity',
            'langcode' => 'ru',
            'version' => '7.x-2.0-beta1',
            'type' => 'remote',
            'filename' => 'file_entity-7.x-2.0-beta1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/file_entity/file_entity-7.x-2.0-beta1.ru.po',
          ),
          'local' => (object) array(
            'project' => 'file_entity',
            'langcode' => 'ru',
            'version' => '7.x-2.0-beta1',
            'type' => 'local',
            'filename' => 'file_entity-7.x-2.0-beta1.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://file_entity-7.x-2.0-beta1.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'fontyourface' => array(
      'ru' => (object) array(
        'name' => 'fontyourface',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'fontyourface',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'fontyourface',
            'langcode' => 'ru',
            'version' => '7.x-2.8',
            'type' => 'remote',
            'filename' => 'fontyourface-7.x-2.8.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/fontyourface/fontyourface-7.x-2.8.ru.po',
          ),
          'local' => (object) array(
            'project' => 'fontyourface',
            'langcode' => 'ru',
            'version' => '7.x-2.8',
            'type' => 'local',
            'filename' => 'fontyourface-7.x-2.8.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://fontyourface-7.x-2.8.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'gmap' => array(
      'ru' => (object) array(
        'name' => 'gmap',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'gmap',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'gmap',
            'langcode' => 'ru',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'gmap-7.x-2.9.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/gmap/gmap-7.x-2.9.ru.po',
          ),
          'local' => (object) array(
            'project' => 'gmap',
            'langcode' => 'ru',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'gmap-7.x-2.9.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://gmap-7.x-2.9.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'i18n' => array(
      'ru' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ru',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.ru.po',
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'ru',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18n-7.x-1.13.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'imagecrop' => array(
      'ru' => (object) array(
        'name' => 'imagecrop',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imagecrop',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imagecrop',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'imagecrop-7.x-1.0-rc3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imagecrop/imagecrop-7.x-1.0-rc3.ru.po',
          ),
          'local' => (object) array(
            'project' => 'imagecrop',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'imagecrop-7.x-1.0-rc3.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://imagecrop-7.x-1.0-rc3.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'imagefield_crop' => array(
      'ru' => (object) array(
        'name' => 'imagefield_crop',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imagefield_crop',
        'langcode' => 'ru',
        'type' => 'current',
        'timestamp' => 1432290458,
        'last_checked' => 1432290457,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imagefield_crop',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'imagefield_crop-7.x-1.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imagefield_crop/imagefield_crop-7.x-1.1.ru.po',
            'timestamp' => 1360049492,
          ),
          'local' => (object) array(
            'project' => 'imagefield_crop',
            'langcode' => 'ru',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'imagefield_crop-7.x-1.1.ru.po',
            'uri' => 'translations://imagefield_crop-7.x-1.1.ru.po',
            'timestamp' => 1432290458,
            'directory' => 'translations://',
            'last_checked' => 1432290457,
            'language' => 'ru',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'image_resize_filter' => array(
      'ru' => (object) array(
        'name' => 'image_resize_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.14',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '0',
        'project' => 'image_resize_filter',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'image_resize_filter',
            'langcode' => 'ru',
            'version' => '7.x-1.14',
            'type' => 'remote',
            'filename' => 'image_resize_filter-7.x-1.14.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/image_resize_filter/image_resize_filter-7.x-1.14.ru.po',
          ),
          'local' => (object) array(
            'project' => 'image_resize_filter',
            'langcode' => 'ru',
            'version' => '7.x-1.14',
            'type' => 'local',
            'filename' => 'image_resize_filter-7.x-1.14.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://image_resize_filter-7.x-1.14.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'job_scheduler' => array(
      'ru' => (object) array(
        'name' => 'job_scheduler',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-alpha3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'job_scheduler',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'job_scheduler',
            'langcode' => 'ru',
            'version' => '7.x-2.0-alpha3',
            'type' => 'remote',
            'filename' => 'job_scheduler-7.x-2.0-alpha3.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/job_scheduler/job_scheduler-7.x-2.0-alpha3.ru.po',
          ),
          'local' => (object) array(
            'project' => 'job_scheduler',
            'langcode' => 'ru',
            'version' => '7.x-2.0-alpha3',
            'type' => 'local',
            'filename' => 'job_scheduler-7.x-2.0-alpha3.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://job_scheduler-7.x-2.0-alpha3.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'jquery_update' => array(
      'ru' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-2.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-2.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-2.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://jquery_update-7.x-2.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'l10n_update' => array(
      'ru' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.ru.po',
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://l10n_update-7.x-2.0.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'libraries' => array(
      'ru' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.ru.po',
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'ru',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://libraries-7.x-2.2.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'menuimage' => array(
      'ru' => (object) array(
        'name' => 'menuimage',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '0',
        'project' => 'menuimage',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'menuimage',
            'langcode' => 'ru',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'menuimage-7.x-1.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/menuimage/menuimage-7.x-1.0.ru.po',
          ),
          'local' => (object) array(
            'project' => 'menuimage',
            'langcode' => 'ru',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'menuimage-7.x-1.0.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://menuimage-7.x-1.0.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'menu_icons' => array(
      'ru' => (object) array(
        'name' => 'menu_icons',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-beta4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '0',
        'project' => 'menu_icons',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'menu_icons',
            'langcode' => 'ru',
            'version' => '7.x-3.0-beta4',
            'type' => 'remote',
            'filename' => 'menu_icons-7.x-3.0-beta4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/menu_icons/menu_icons-7.x-3.0-beta4.ru.po',
          ),
          'local' => (object) array(
            'project' => 'menu_icons',
            'langcode' => 'ru',
            'version' => '7.x-3.0-beta4',
            'type' => 'local',
            'filename' => 'menu_icons-7.x-3.0-beta4.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://menu_icons-7.x-3.0-beta4.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'nice_menus' => array(
      'ru' => (object) array(
        'name' => 'nice_menus',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'nice_menus',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'nice_menus',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'nice_menus-7.x-2.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/nice_menus/nice_menus-7.x-2.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'nice_menus',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'nice_menus-7.x-2.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://nice_menus-7.x-2.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'panels' => array(
      'ru' => (object) array(
        'name' => 'panels',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'panels',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'panels',
            'langcode' => 'ru',
            'version' => '7.x-3.5',
            'type' => 'remote',
            'filename' => 'panels-7.x-3.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/panels/panels-7.x-3.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'panels',
            'langcode' => 'ru',
            'version' => '7.x-3.5',
            'type' => 'local',
            'filename' => 'panels-7.x-3.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://panels-7.x-3.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'panels_everywhere' => array(
      'ru' => (object) array(
        'name' => 'panels_everywhere',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'panels_everywhere',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'panels_everywhere',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc2',
            'type' => 'remote',
            'filename' => 'panels_everywhere-7.x-1.0-rc2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/panels_everywhere/panels_everywhere-7.x-1.0-rc2.ru.po',
          ),
          'local' => (object) array(
            'project' => 'panels_everywhere',
            'langcode' => 'ru',
            'version' => '7.x-1.0-rc2',
            'type' => 'local',
            'filename' => 'panels_everywhere-7.x-1.0-rc2.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://panels_everywhere-7.x-1.0-rc2.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'pathauto' => array(
      'ru' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ru',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.ru.po',
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'ru',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://pathauto-7.x-1.2.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'search_api' => array(
      'ru' => (object) array(
        'name' => 'search_api',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.14',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'search_api',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'search_api',
            'langcode' => 'ru',
            'version' => '7.x-1.14',
            'type' => 'remote',
            'filename' => 'search_api-7.x-1.14.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/search_api/search_api-7.x-1.14.ru.po',
          ),
          'local' => (object) array(
            'project' => 'search_api',
            'langcode' => 'ru',
            'version' => '7.x-1.14',
            'type' => 'local',
            'filename' => 'search_api-7.x-1.14.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://search_api-7.x-1.14.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'search_api_db' => array(
      'ru' => (object) array(
        'name' => 'search_api_db',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'search_api_db',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'search_api_db',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'search_api_db-7.x-1.4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/search_api_db/search_api_db-7.x-1.4.ru.po',
          ),
          'local' => (object) array(
            'project' => 'search_api_db',
            'langcode' => 'ru',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'search_api_db-7.x-1.4.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://search_api_db-7.x-1.4.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'services' => array(
      'ru' => (object) array(
        'name' => 'services',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'services',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'services',
            'langcode' => 'ru',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'services-7.x-3.11.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/services/services-7.x-3.11.ru.po',
          ),
          'local' => (object) array(
            'project' => 'services',
            'langcode' => 'ru',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'services-7.x-3.11.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://services-7.x-3.11.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'strongarm' => array(
      'ru' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.ru.po',
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'ru',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://strongarm-7.x-2.0.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'taxonomy_menu' => array(
      'ru' => (object) array(
        'name' => 'taxonomy_menu',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_menu',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_menu',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'taxonomy_menu-7.x-1.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_menu/taxonomy_menu-7.x-1.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'taxonomy_menu',
            'langcode' => 'ru',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'taxonomy_menu-7.x-1.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_menu-7.x-1.5.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'token' => array(
      'ru' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.ru.po',
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'ru',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://token-7.x-1.6.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'transliteration' => array(
      'ru' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.ru.po',
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'ru',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://transliteration-7.x-3.2.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'uuid' => array(
      'ru' => (object) array(
        'name' => 'uuid',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-alpha6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'uuid',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'uuid',
            'langcode' => 'ru',
            'version' => '7.x-1.0-alpha6',
            'type' => 'remote',
            'filename' => 'uuid-7.x-1.0-alpha6.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/uuid/uuid-7.x-1.0-alpha6.ru.po',
          ),
          'local' => (object) array(
            'project' => 'uuid',
            'langcode' => 'ru',
            'version' => '7.x-1.0-alpha6',
            'type' => 'local',
            'filename' => 'uuid-7.x-1.0-alpha6.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://uuid-7.x-1.0-alpha6.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'uuid_features' => array(
      'ru' => (object) array(
        'name' => 'uuid_features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-alpha4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'uuid_features',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'uuid_features',
            'langcode' => 'ru',
            'version' => '7.x-1.0-alpha4',
            'type' => 'remote',
            'filename' => 'uuid_features-7.x-1.0-alpha4.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/uuid_features/uuid_features-7.x-1.0-alpha4.ru.po',
          ),
          'local' => (object) array(
            'project' => 'uuid_features',
            'langcode' => 'ru',
            'version' => '7.x-1.0-alpha4',
            'type' => 'local',
            'filename' => 'uuid_features-7.x-1.0-alpha4.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://uuid_features-7.x-1.0-alpha4.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'variable' => array(
      'ru' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.ru.po',
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'ru',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://variable-7.x-2.5.ru.po',
          ),
        ),
        'language' => 'ru',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views' => array(
      'ru' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'ru',
            'version' => '7.x-3.10',
            'type' => 'remote',
            'filename' => 'views-7.x-3.10.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.10.ru.po',
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'ru',
            'version' => '7.x-3.10',
            'type' => 'local',
            'filename' => 'views-7.x-3.10.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://views-7.x-3.10.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
    'views_slideshow' => array(
      'ru' => (object) array(
        'name' => 'views_slideshow',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_slideshow',
        'langcode' => 'ru',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_slideshow',
            'langcode' => 'ru',
            'version' => '7.x-3.1',
            'type' => 'remote',
            'filename' => 'views_slideshow-7.x-3.1.ru.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_slideshow/views_slideshow-7.x-3.1.ru.po',
          ),
          'local' => (object) array(
            'project' => 'views_slideshow',
            'langcode' => 'ru',
            'version' => '7.x-3.1',
            'type' => 'local',
            'filename' => 'views_slideshow-7.x-3.1.ru.po',
            'directory' => 'translations://',
            'uri' => 'translations://views_slideshow-7.x-3.1.ru.po',
          ),
        ),
        'language' => 'ru',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'ru',
    'name' => 'Russian',
    'native' => 'Русский',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '3',
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'ru',
    'weight' => '-10',
    'javascript' => 'YvQE3VUIrMks_4lEDn3eL9H7GzjtEpMrL50c8YjHZws',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_url_part';
  $strongarm->value = '0';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  return $export;
}
