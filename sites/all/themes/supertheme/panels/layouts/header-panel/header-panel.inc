<?php

/**
 * @file
 * Defines an asymetric Mondrian inspired panels layout.
 */

// Plugin definition.
$plugin = array(
    'title' => t('Header-panel'),
    'category' => t('supertheme header layouts'),
    'css_id' => 'header',
    'icon' => 'header-panel.png',
    'theme' => 'header-panel',
    'css' => '../../../css/layouts/supertheme/supertheme.layout.css',
    'regions' => array(
        'header' => t('Header region'),
        'content' => t('Content'),
        'footer' => t('Footer region'),
    ),
);

