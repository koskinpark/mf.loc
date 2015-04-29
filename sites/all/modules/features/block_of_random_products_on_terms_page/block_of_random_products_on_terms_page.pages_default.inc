<?php
/**
 * @file
 * block_of_random_products_on_terms_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function block_of_random_products_on_terms_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__catalog';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Catalog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'catalog',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'catalog' => 'catalog',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e9d5f4de-3089-493f-9cf9-057fee42d2f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79155095-275a-4f9f-b817-e422ba2b7d9a';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_image_for_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'image_for_title_of_taxonomy_term',
        'image_link' => '',
      ),
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79155095-275a-4f9f-b817-e422ba2b7d9a';
    $display->content['new-79155095-275a-4f9f-b817-e422ba2b7d9a'] = $pane;
    $display->panels['content'][0] = 'new-79155095-275a-4f9f-b817-e422ba2b7d9a';
    $pane = new stdClass();
    $pane->pid = 'new-dcb3cbae-f1e0-4c1d-9e80-f3f21d8bcbbc';
    $pane->panel = 'content';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dcb3cbae-f1e0-4c1d-9e80-f3f21d8bcbbc';
    $display->content['new-dcb3cbae-f1e0-4c1d-9e80-f3f21d8bcbbc'] = $pane;
    $display->panels['content'][1] = 'new-dcb3cbae-f1e0-4c1d-9e80-f3f21d8bcbbc';
    $pane = new stdClass();
    $pane->pid = 'new-917668fc-42e3-45e6-986c-7959ace585d0';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term_slideshow-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '917668fc-42e3-45e6-986c-7959ace585d0';
    $display->content['new-917668fc-42e3-45e6-986c-7959ace585d0'] = $pane;
    $display->panels['content'][2] = 'new-917668fc-42e3-45e6-986c-7959ace585d0';
    $pane = new stdClass();
    $pane->pid = 'new-3c338075-4fd4-4e1f-9467-0138ea1115df';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_subterms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3c338075-4fd4-4e1f-9467-0138ea1115df';
    $display->content['new-3c338075-4fd4-4e1f-9467-0138ea1115df'] = $pane;
    $display->panels['content'][3] = 'new-3c338075-4fd4-4e1f-9467-0138ea1115df';
    $pane = new stdClass();
    $pane->pid = 'new-6872a9e5-3008-4427-b704-c67274316495';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_product_of_taxonomy_term-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6872a9e5-3008-4427-b704-c67274316495';
    $display->content['new-6872a9e5-3008-4427-b704-c67274316495'] = $pane;
    $display->panels['content'][4] = 'new-6872a9e5-3008-4427-b704-c67274316495';
    $pane = new stdClass();
    $pane->pid = 'new-ddb2c523-4de4-4188-8069-ba34ad4f28a3';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_product_of_taxonomy_term-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ddb2c523-4de4-4188-8069-ba34ad4f28a3';
    $display->content['new-ddb2c523-4de4-4188-8069-ba34ad4f28a3'] = $pane;
    $display->panels['content'][5] = 'new-ddb2c523-4de4-4188-8069-ba34ad4f28a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__catalog'] = $handler;

  return $export;
}
