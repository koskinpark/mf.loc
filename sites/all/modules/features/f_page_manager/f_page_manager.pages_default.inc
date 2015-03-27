<?php
/**
 * @file
 * f_page_manager.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function f_page_manager_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__default';
  $handler->task = 'site_template';
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
  );
  $display = new panels_display();
  $display->layout = 'mf';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '329270a4-3c79-450b-b67f-8ea955862c2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = 'a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca';
    $display->content['new-a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca'] = $pane;
    $display->panels['content'][0] = 'new-a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca';
    $pane = new stdClass();
    $pane->pid = 'new-2932a9e0-86a1-4e22-8d02-ce0a437c392d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '2932a9e0-86a1-4e22-8d02-ce0a437c392d';
    $display->content['new-2932a9e0-86a1-4e22-8d02-ce0a437c392d'] = $pane;
    $display->panels['header'][0] = 'new-2932a9e0-86a1-4e22-8d02-ce0a437c392d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__default'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function f_page_manager_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_8484dd3e-958e-44fa-ba33-ab5d950bf3b7';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  );
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b05ebc5d-d8d2-4f98-8837-95daf6e4519e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6d127706-71b5-4a89-87c1-0dc9d522d594';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'view_slideshow-panel_pane_1';
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
    $pane->uuid = '6d127706-71b5-4a89-87c1-0dc9d522d594';
    $display->content['new-6d127706-71b5-4a89-87c1-0dc9d522d594'] = $pane;
    $display->panels['content'][0] = 'new-6d127706-71b5-4a89-87c1-0dc9d522d594';
    $pane = new stdClass();
    $pane->pid = 'new-92766639-ff44-472d-b8b9-a07fcc129047';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_homepage_product-panel_pane_1';
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
    $pane->uuid = '92766639-ff44-472d-b8b9-a07fcc129047';
    $display->content['new-92766639-ff44-472d-b8b9-a07fcc129047'] = $pane;
    $display->panels['content'][1] = 'new-92766639-ff44-472d-b8b9-a07fcc129047';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
