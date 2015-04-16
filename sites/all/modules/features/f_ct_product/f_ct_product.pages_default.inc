<?php
/**
 * @file
 * f_ct_product.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function f_ct_product_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_53c82c5c-f704-424e-a9b4-e8264576a91f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = 'e613ab01-29c5-41bb-833e-de5575990891';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-806d8f47-4739-4e03-bed3-a992218b58ee';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '806d8f47-4739-4e03-bed3-a992218b58ee';
    $display->content['new-806d8f47-4739-4e03-bed3-a992218b58ee'] = $pane;
    $display->panels['content'][0] = 'new-806d8f47-4739-4e03-bed3-a992218b58ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-806d8f47-4739-4e03-bed3-a992218b58ee';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_53c82c5c-f704-424e-a9b4-e8264576a91f'] = $handler;

  return $export;
}