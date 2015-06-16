<?php

/**
 * Implementats hook_drush_command().
 */

function content_importer_drush_command() {
    $items = array();
    $items['content-importer-command'] = array(
        'description' => 'Allow to import content from files',
        'aliases' => array('cic'), //content importer command
    );
    return $items;
}

/**
 * Drush command callback.
 */

function drush_content_importer_command() {
    content_importer_content_import();
}


