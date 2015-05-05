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
  $handler->name = 'node_view__actions_with_main_pictures';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Actions with main pictures',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'File from Node (on Node: Main picture of action [field_main_picture_of_action])',
        'keyword' => 'main_picture',
        'name' => 'entity_from_field:field_main_picture_of_action-node-file',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'actions_with_main_pictures',
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
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_entity_from_field:field_main_picture_of_action-node-file_1',
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
  $display->uuid = 'a8f33c6e-01c0-4042-80e7-f90177042a7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-53d855c2-ebe6-4612-b854-e14c581de972';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_picture_of_action';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'main_image_of_action_page',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '53d855c2-ebe6-4612-b854-e14c581de972';
    $display->content['new-53d855c2-ebe6-4612-b854-e14c581de972'] = $pane;
    $display->panels['content'][0] = 'new-53d855c2-ebe6-4612-b854-e14c581de972';
    $pane = new stdClass();
    $pane->pid = 'new-595f923f-dab0-447a-af7e-e2fa513a8633';
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
    $pane->uuid = '595f923f-dab0-447a-af7e-e2fa513a8633';
    $display->content['new-595f923f-dab0-447a-af7e-e2fa513a8633'] = $pane;
    $display->panels['content'][1] = 'new-595f923f-dab0-447a-af7e-e2fa513a8633';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__actions_with_main_pictures'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__actions_without_background_image';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Actions without background image',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'actions_without_background_image',
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
  $display->uuid = '5cd644b8-5fe7-461d-8efe-a544db4d9e60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-55c44b1a-20dd-472a-9bc6-d05fa5a6eeba';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '55c44b1a-20dd-472a-9bc6-d05fa5a6eeba';
    $display->content['new-55c44b1a-20dd-472a-9bc6-d05fa5a6eeba'] = $pane;
    $display->panels['content'][0] = 'new-55c44b1a-20dd-472a-9bc6-d05fa5a6eeba';
    $pane = new stdClass();
    $pane->pid = 'new-61765fb7-a548-4e9e-ab71-07c29ce0f6c0';
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
    $pane->uuid = '61765fb7-a548-4e9e-ab71-07c29ce0f6c0';
    $display->content['new-61765fb7-a548-4e9e-ab71-07c29ce0f6c0'] = $pane;
    $display->panels['content'][1] = 'new-61765fb7-a548-4e9e-ab71-07c29ce0f6c0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-61765fb7-a548-4e9e-ab71-07c29ce0f6c0';
  $handler->conf['display'] = $display;
  $export['node_view__actions_without_background_image'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__nodes';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
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
        4 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
              'mainpage_slideshow' => 'mainpage_slideshow',
              'about_us' => 'about_us',
              'contacts' => 'contacts',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
        5 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'actions',
          ),
          'context' => 'argument_string_1',
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
              'about_us' => 'about_us',
              'contacts' => 'contacts',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ffcf169-6e66-4609-8e49-3e096ef25793';
    $display->content['new-2ffcf169-6e66-4609-8e49-3e096ef25793'] = $pane;
    $display->panels['footer'][0] = 'new-2ffcf169-6e66-4609-8e49-3e096ef25793';
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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__default';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
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
  $page->name = 'actions';
  $page->task = 'page';
  $page->admin_title = 'Actions';
  $page->admin_description = '';
  $page->path = 'actions';
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
  $handler->name = 'page_actions__actions';
  $handler->task = 'page';
  $handler->subtask = 'actions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Actions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'all-actions',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'actions',
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
  $display->title = 'You know';
  $display->uuid = '07d8a262-f1b3-4a57-aa9e-14f859d91926';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f1bf5d6-2f8c-4495-821e-b6fd463cf64d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f1bf5d6-2f8c-4495-821e-b6fd463cf64d';
    $display->content['new-6f1bf5d6-2f8c-4495-821e-b6fd463cf64d'] = $pane;
    $display->panels['content'][0] = 'new-6f1bf5d6-2f8c-4495-821e-b6fd463cf64d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['actions'] = $page;

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
