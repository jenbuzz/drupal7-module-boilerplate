<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'my_panel';
$page->task = 'page';
$page->admin_title = 'My Panel';
$page->admin_description = 'This is my first panel.';
$page->path = 'my-panel';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'My Panel',
  'name' => 'navigation',
  'weight' => '0',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_my_panel_panel_context';
$handler->task = 'page';
$handler->subtask = 'my_panel';
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
$display->layout = 'flexible';
$display->layout_settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 1,
        1 => 'main',
      ),
      'parent' => NULL,
    ),
    'main' => array(
      'type' => 'column',
      'width' => '70.0962504627426',
      'width_type' => '%',
      'children' => array(
        0 => 'main-row',
      ),
      'parent' => 'canvas',
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'center',
      ),
      'parent' => 'main',
    ),
    'center' => array(
      'type' => 'region',
      'title' => 'Center',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
    ),
    1 => array(
      'type' => 'column',
      'width' => '29.90374953725739',
      'width_type' => '%',
      'parent' => 'canvas',
      'children' => array(
        0 => 2,
      ),
      'class' => '',
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'panel_left',
      ),
      'parent' => '1',
      'class' => '',
    ),
    'panel_left' => array(
      'type' => 'region',
      'title' => 'Panel Left',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
      'class' => '',
    ),
  ),
);
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    'panel_left' => NULL,
  ),
);
$display->cache = array();
$display->title = 'This is my Panel';
$display->uuid = 'b7ae4f45-292b-4501-906e-0c46b2902073';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0186c845-25f3-40c2-9bb4-57f4df8ff03e';
  $pane->panel = 'center';
  $pane->type = 'search_form';
  $pane->subtype = 'search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'apachesolr_search',
    'form' => 'advanced',
    'path_type' => 'default',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0186c845-25f3-40c2-9bb4-57f4df8ff03e';
  $display->content['new-0186c845-25f3-40c2-9bb4-57f4df8ff03e'] = $pane;
  $display->panels['center'][0] = 'new-0186c845-25f3-40c2-9bb4-57f4df8ff03e';
  $pane = new stdClass();
  $pane->pid = 'new-3b8b7851-9323-4d8a-a4dc-6d7ef29922d2';
  $pane->panel = 'panel_left';
  $pane->type = 'block';
  $pane->subtype = 'node-recent';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b8b7851-9323-4d8a-a4dc-6d7ef29922d2';
  $display->content['new-3b8b7851-9323-4d8a-a4dc-6d7ef29922d2'] = $pane;
  $display->panels['panel_left'][0] = 'new-3b8b7851-9323-4d8a-a4dc-6d7ef29922d2';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-3b8b7851-9323-4d8a-a4dc-6d7ef29922d2';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

