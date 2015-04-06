<?php
/**
 * @file
 * block_of_terms_on_terms_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function block_of_terms_on_terms_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__default';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
    'access' => array(
      'plugins' => array(),
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
  $display->uuid = 'e4ba0889-ea23-4095-ac22-dd00f16ed82b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-601aedcb-6a10-46b4-b499-9b8090e1c5de';
    $pane->panel = 'content';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 0,
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
    $pane->uuid = '601aedcb-6a10-46b4-b499-9b8090e1c5de';
    $display->content['new-601aedcb-6a10-46b4-b499-9b8090e1c5de'] = $pane;
    $display->panels['content'][0] = 'new-601aedcb-6a10-46b4-b499-9b8090e1c5de';
    $pane = new stdClass();
    $pane->pid = 'new-ad08e0b9-8b17-41ae-b89f-20e493e90c22';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ad08e0b9-8b17-41ae-b89f-20e493e90c22';
    $display->content['new-ad08e0b9-8b17-41ae-b89f-20e493e90c22'] = $pane;
    $display->panels['content'][1] = 'new-ad08e0b9-8b17-41ae-b89f-20e493e90c22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__default'] = $handler;

  return $export;
}
