<?php

/**
 * @file
 * Defines an asymetric Mondrian inspired panels layout.
 */

// Plugin definition.
$plugin = array(
    'title' => t('mf'),
    'icon' => 'mf.png',
    'category' => t('Mf layouts'),
    'theme' => 'mf',
    'css' => '../../../css/mf.layout.css',
    'regions' => array(
        'header' => t('Header'),
        'content' => t('Content'),
        'footer' => t('Footer'),
    ),
);

