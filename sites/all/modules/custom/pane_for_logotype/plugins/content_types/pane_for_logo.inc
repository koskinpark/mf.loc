<?php

$plugin = array(
        'title' => t('Pane for logotype'),
        'description' => t('New pane for logo'),

    'category' => t('Custom panes'),
        'render region' => 'logotype_picture_style_render',
    'hook theme' => array(
        'pane_for_logo' => array(
            'variables' => array(
                'style_attributes' => array(),
            ),
            'path' => drupal_get_path('module', 'pane_for_logotype') . '/plugins/content_types',
            'template' => 'pane_for_logo',
        ),
    ),
    );

function pane_for_logotype_pane_for_logo_content_type_edit_form($form, $form_state, $vars) {
    $conf = $form_state['conf'];
    $form['image_style'] = array(
        '#type' => 'select',
        '#title' => t('Image Style'),
        '#description' => t('Choose the appropriate image style for the logotype image.'),
        '#options' => image_style_options(),
        '#default_value' => (!empty($conf['image_style'])) ? $conf['image_style'] : '',
    );
    return $form;
}

function pane_for_logotype_pane_for_logo_content_type_edit_form_submit(&$form, &$form_state) {
    foreach (array('image_style') as $key) {
            $form_state['conf'][$key] = $form_state['values'][$key];
    }
    foreach (array('class') as $key) {
        $form_state['conf'][$key] = $form_state['values'][$key];
    }
}
function pane_for_logotype_pane_for_logo_content_type_render($subtype, $conf, $args, $contexts) {
    $image_logo_url_path = theme_get_setting('logo_path');
    $pane = new stdClass();
    $pane->content = l(theme('image_style', array(
            'path' => $image_logo_url_path,
            'style_name' => $conf['image_style'],
        )),
        '<front>', array('html' => true)
        );
    return $pane;
}


?>