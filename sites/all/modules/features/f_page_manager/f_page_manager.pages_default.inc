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
  $handler->name = 'node_view__actions';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Actions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'actions',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mainpage_slideshow' => 'mainpage_slideshow',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->uuid = '92bd38aa-5466-4ccd-9fec-13ca39a2a845';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29313dbb-111f-468a-9c57-a3cf66052934';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'or',
      'plugins' => array(),
    );
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '29313dbb-111f-468a-9c57-a3cf66052934';
    $display->content['new-29313dbb-111f-468a-9c57-a3cf66052934'] = $pane;
    $display->panels['content'][0] = 'new-29313dbb-111f-468a-9c57-a3cf66052934';
    $pane = new stdClass();
    $pane->pid = 'new-32288658-3a8b-4df8-8983-df8d56f1886f';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_other_actions_on_actions_page-panel_pane_1';
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
    $pane->uuid = '32288658-3a8b-4df8-8983-df8d56f1886f';
    $display->content['new-32288658-3a8b-4df8-8983-df8d56f1886f'] = $pane;
    $display->panels['content'][1] = 'new-32288658-3a8b-4df8-8983-df8d56f1886f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__actions'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__nodes';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Nodes',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'nodes',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'is_colorbox_node',
          'settings' => NULL,
          'not' => TRUE,
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
  $display->uuid = 'b42d29d6-c026-496e-9742-95d4c019a12e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3f25c31-8ce4-4d21-8d51-8aa5af3cd7e6';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b3f25c31-8ce4-4d21-8d51-8aa5af3cd7e6';
    $display->content['new-b3f25c31-8ce4-4d21-8d51-8aa5af3cd7e6'] = $pane;
    $display->panels['content'][0] = 'new-b3f25c31-8ce4-4d21-8d51-8aa5af3cd7e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__nodes'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node__panel_context_4b44e403-3b66-448d-af3d-0b00e6f1ebb9';
  $handler->task = 'search';
  $handler->subtask = 'node';
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
  $display->uuid = '66b4f94e-74e1-4f2c-ab8a-05479617dc1b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7fbc9f9-3fb8-4ac3-b8e1-275971991eb7';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_titles-panel_pane_1';
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
    $pane->uuid = 'a7fbc9f9-3fb8-4ac3-b8e1-275971991eb7';
    $display->content['new-a7fbc9f9-3fb8-4ac3-b8e1-275971991eb7'] = $pane;
    $display->panels['content'][0] = 'new-a7fbc9f9-3fb8-4ac3-b8e1-275971991eb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a7fbc9f9-3fb8-4ac3-b8e1-275971991eb7';
  $handler->conf['display'] = $display;
  $export['search_node__panel_context_4b44e403-3b66-448d-af3d-0b00e6f1ebb9'] = $handler;

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
    $pane->pid = 'new-14414361-2ae1-4753-a1a2-63187b37f24f';
    $pane->panel = 'content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'search/node',
          ),
          'context' => 'argument_string_1',
          'not' => TRUE,
        ),
        3 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mainpage_slideshow' => 'mainpage_slideshow',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
        4 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
              'mainpage_slideshow' => 'mainpage_slideshow',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '14414361-2ae1-4753-a1a2-63187b37f24f';
    $display->content['new-14414361-2ae1-4753-a1a2-63187b37f24f'] = $pane;
    $display->panels['content'][0] = 'new-14414361-2ae1-4753-a1a2-63187b37f24f';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca';
    $display->content['new-a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca'] = $pane;
    $display->panels['content'][1] = 'new-a866c5b4-dca3-4e7a-b3fd-11c6a89d71ca';
    $pane = new stdClass();
    $pane->pid = 'new-d819ea40-6b10-47cf-86e3-ef4a0b792b9c';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'most_viewed-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mainpage_slideshow' => 'mainpage_slideshow',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd819ea40-6b10-47cf-86e3-ef4a0b792b9c';
    $display->content['new-d819ea40-6b10-47cf-86e3-ef4a0b792b9c'] = $pane;
    $display->panels['content'][2] = 'new-d819ea40-6b10-47cf-86e3-ef4a0b792b9c';
    $pane = new stdClass();
    $pane->pid = 'new-0e436427-712c-4b88-a42c-efef549b1f4e';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'footer_inform_about_site-panel_pane_1';
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
    $pane->uuid = '0e436427-712c-4b88-a42c-efef549b1f4e';
    $display->content['new-0e436427-712c-4b88-a42c-efef549b1f4e'] = $pane;
    $display->panels['footer'][0] = 'new-0e436427-712c-4b88-a42c-efef549b1f4e';
    $pane = new stdClass();
    $pane->pid = 'new-2ffcf169-6e66-4609-8e49-3e096ef25793';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ffcf169-6e66-4609-8e49-3e096ef25793';
    $display->content['new-2ffcf169-6e66-4609-8e49-3e096ef25793'] = $pane;
    $display->panels['footer'][1] = 'new-2ffcf169-6e66-4609-8e49-3e096ef25793';
    $pane = new stdClass();
    $pane->pid = 'new-ccad9234-b5d0-4678-830d-d26adf318e51';
    $pane->panel = 'header';
    $pane->type = 'pane_for_logo';
    $pane->subtype = 'pane_for_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'image_style' => 'logotype',
      'class' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccad9234-b5d0-4678-830d-d26adf318e51';
    $display->content['new-ccad9234-b5d0-4678-830d-d26adf318e51'] = $pane;
    $display->panels['header'][0] = 'new-ccad9234-b5d0-4678-830d-d26adf318e51';
    $pane = new stdClass();
    $pane->pid = 'new-42b37918-af7b-4ba6-9b20-cffefb0d8349';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'searchbox-panel_pane_1';
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
    $pane->uuid = '42b37918-af7b-4ba6-9b20-cffefb0d8349';
    $display->content['new-42b37918-af7b-4ba6-9b20-cffefb0d8349'] = $pane;
    $display->panels['header'][1] = 'new-42b37918-af7b-4ba6-9b20-cffefb0d8349';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2932a9e0-86a1-4e22-8d02-ce0a437c392d';
    $display->content['new-2932a9e0-86a1-4e22-8d02-ce0a437c392d'] = $pane;
    $display->panels['header'][2] = 'new-2932a9e0-86a1-4e22-8d02-ce0a437c392d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__default'] = $handler;

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
    $pane->pid = 'new-6b5269cf-6ba7-4936-8499-043e9e5964c1';
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
    $pane->uuid = '6b5269cf-6ba7-4936-8499-043e9e5964c1';
    $display->content['new-6b5269cf-6ba7-4936-8499-043e9e5964c1'] = $pane;
    $display->panels['content'][0] = 'new-6b5269cf-6ba7-4936-8499-043e9e5964c1';
    $pane = new stdClass();
    $pane->pid = 'new-601aedcb-6a10-46b4-b499-9b8090e1c5de';
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
    $pane->uuid = '601aedcb-6a10-46b4-b499-9b8090e1c5de';
    $display->content['new-601aedcb-6a10-46b4-b499-9b8090e1c5de'] = $pane;
    $display->panels['content'][1] = 'new-601aedcb-6a10-46b4-b499-9b8090e1c5de';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ad08e0b9-8b17-41ae-b89f-20e493e90c22';
    $display->content['new-ad08e0b9-8b17-41ae-b89f-20e493e90c22'] = $pane;
    $display->panels['content'][2] = 'new-ad08e0b9-8b17-41ae-b89f-20e493e90c22';
    $pane = new stdClass();
    $pane->pid = 'new-1cdc2fd3-739b-4ee4-9e7d-2872e66f3848';
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
    $pane->uuid = '1cdc2fd3-739b-4ee4-9e7d-2872e66f3848';
    $display->content['new-1cdc2fd3-739b-4ee4-9e7d-2872e66f3848'] = $pane;
    $display->panels['content'][3] = 'new-1cdc2fd3-739b-4ee4-9e7d-2872e66f3848';
    $pane = new stdClass();
    $pane->pid = 'new-495773af-5706-4ba2-ada0-e3ec656a99ff';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_product_of_taxonomy_term-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '495773af-5706-4ba2-ada0-e3ec656a99ff';
    $display->content['new-495773af-5706-4ba2-ada0-e3ec656a99ff'] = $pane;
    $display->panels['content'][4] = 'new-495773af-5706-4ba2-ada0-e3ec656a99ff';
    $pane = new stdClass();
    $pane->pid = 'new-288c143e-e44c-4bd2-99ff-ec148a0768e8';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '288c143e-e44c-4bd2-99ff-ec148a0768e8';
    $display->content['new-288c143e-e44c-4bd2-99ff-ec148a0768e8'] = $pane;
    $display->panels['content'][5] = 'new-288c143e-e44c-4bd2-99ff-ec148a0768e8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__default'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function f_page_manager_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'action_page';
  $page->task = 'page';
  $page->admin_title = 'action page';
  $page->admin_description = '';
  $page->path = 'action/%action';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'action' => array(
      'id' => 1,
      'identifier' => 'Node: UUID',
      'name' => 'entity_uuid:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_action_page__panel_context_dd0f8e66-56df-448e-9335-a06eabfc6e7c';
  $handler->task = 'page';
  $handler->subtask = 'action_page';
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
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '800b90b2-f5b2-424f-b261-914a2403c9c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-09f9506c-5649-4f47-befe-2217af19b12e';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'action_page-panel_pane_1';
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
    $pane->uuid = '09f9506c-5649-4f47-befe-2217af19b12e';
    $display->content['new-09f9506c-5649-4f47-befe-2217af19b12e'] = $pane;
    $display->panels['content'][0] = 'new-09f9506c-5649-4f47-befe-2217af19b12e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['action_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
    $pane = new stdClass();
    $pane->pid = 'new-6a6ecc91-aeda-484d-9322-4d8e69fea3a8';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'see_more_product_homepage-panel_pane_1';
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
    $pane->uuid = '6a6ecc91-aeda-484d-9322-4d8e69fea3a8';
    $display->content['new-6a6ecc91-aeda-484d-9322-4d8e69fea3a8'] = $pane;
    $display->panels['content'][2] = 'new-6a6ecc91-aeda-484d-9322-4d8e69fea3a8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
