<?php

/**
 * @file
 * Theme settings file for the mf theme.
 */

require_once dirname(__FILE__) . '/template.php';

/**
 * Implements hook_form_FORM_alter().
 */
function mf_form_system_theme_settings_alter(&$form, $form_state) {
  // You can use this hook to append your own theme settings to the theme
  // settings form for your subtheme. You should also take a look at the
  // 'extensions' concept in the Omega base theme.

//dpm($name_of_logo);
//    dpm(theme_get_setting('logo_path'));

//    $form ['logo']['settings']['logo_path'] = array(
//        '#type' => 'textfield',
//        '#title' => t('Path to custom logo'),
//        '#description' => t('The path to the file you would like to use as your logo file instead of the default logo.'),
//        '#default_value' => theme_get_setting('logo_path'),
//    );
}
