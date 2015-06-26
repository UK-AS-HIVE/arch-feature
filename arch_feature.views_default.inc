<?php
/**
 * @file
 * arch_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function arch_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/lexington/#[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['alter']['path'] = '/lexington/#[nid]';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'front_preview',
    'image_link' => '',
  );
  /* Field: Content: Intro Blurb */
  $handler->display->display_options['fields']['field_intro_blurb']['id'] = 'field_intro_blurb';
  $handler->display->display_options['fields']['field_intro_blurb']['table'] = 'field_data_field_intro_blurb';
  $handler->display->display_options['fields']['field_intro_blurb']['field'] = 'field_intro_blurb';
  $handler->display->display_options['fields']['field_intro_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_intro_blurb']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_intro_blurb']['alter']['text'] = '<div class="section"><div class="arrow-indicator"></div>[field_intro_blurb]</div>';
  $handler->display->display_options['fields']['field_intro_blurb']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $export['front'] = $view;

  $view = new view();
  $view->name = 'manage_art_sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Art Sections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Art Sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Inner Text */
  $handler->display->display_options['fields']['field_inner_text']['id'] = 'field_inner_text';
  $handler->display->display_options['fields']['field_inner_text']['table'] = 'field_data_field_inner_text';
  $handler->display->display_options['fields']['field_inner_text']['field'] = 'field_inner_text';
  /* Field: Content: Part of */
  $handler->display->display_options['fields']['field_art']['id'] = 'field_art';
  $handler->display->display_options['fields']['field_art']['table'] = 'field_data_field_art';
  $handler->display->display_options['fields']['field_art']['field'] = 'field_art';
  /* Field: Content: Height */
  $handler->display->display_options['fields']['field_height']['id'] = 'field_height';
  $handler->display->display_options['fields']['field_height']['table'] = 'field_data_field_height';
  $handler->display->display_options['fields']['field_height']['field'] = 'field_height';
  $handler->display->display_options['fields']['field_height']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Width */
  $handler->display->display_options['fields']['field_width']['id'] = 'field_width';
  $handler->display->display_options['fields']['field_width']['table'] = 'field_data_field_width';
  $handler->display->display_options['fields']['field_width']['field'] = 'field_width';
  $handler->display->display_options['fields']['field_width']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: X */
  $handler->display->display_options['fields']['field_x']['id'] = 'field_x';
  $handler->display->display_options['fields']['field_x']['table'] = 'field_data_field_x';
  $handler->display->display_options['fields']['field_x']['field'] = 'field_x';
  $handler->display->display_options['fields']['field_x']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Y */
  $handler->display->display_options['fields']['field_y']['id'] = 'field_y';
  $handler->display->display_options['fields']['field_y']['table'] = 'field_data_field_y';
  $handler->display->display_options['fields']['field_y']['field'] = 'field_y';
  $handler->display->display_options['fields']['field_y']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'section' => 'section',
  );
  /* Filter criterion: Content: Part of (field_art) */
  $handler->display->display_options['filters']['field_art_nid']['id'] = 'field_art_nid';
  $handler->display->display_options['filters']['field_art_nid']['table'] = 'field_data_field_art';
  $handler->display->display_options['filters']['field_art_nid']['field'] = 'field_art_nid';
  $handler->display->display_options['filters']['field_art_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_art_nid']['expose']['operator_id'] = 'field_art_nid_op';
  $handler->display->display_options['filters']['field_art_nid']['expose']['label'] = 'Part of';
  $handler->display->display_options['filters']['field_art_nid']['expose']['operator'] = 'field_art_nid_op';
  $handler->display->display_options['filters']['field_art_nid']['expose']['identifier'] = 'field_art_nid';
  $handler->display->display_options['filters']['field_art_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage/sections';
  $export['manage_art_sections'] = $view;

  $view = new view();
  $view->name = 'manage_teacher_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Manage Teacher Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Teacher Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Field collection item: Entity with the File Descriptors (field_file_descriptors) */
  $handler->display->display_options['relationships']['field_file_descriptors_node']['id'] = 'field_file_descriptors_node';
  $handler->display->display_options['relationships']['field_file_descriptors_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_file_descriptors_node']['field'] = 'field_file_descriptors_node';
  /* Field: Field collection item: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  /* Field: Field collection item: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_file_descriptors_node';
  $handler->display->display_options['fields']['title']['label'] = 'Section';
  /* Field: Content: Part of */
  $handler->display->display_options['fields']['field_art']['id'] = 'field_art';
  $handler->display->display_options['fields']['field_art']['table'] = 'field_data_field_art';
  $handler->display->display_options['fields']['field_art']['field'] = 'field_art';
  $handler->display->display_options['fields']['field_art']['relationship'] = 'field_file_descriptors_node';
  $handler->display->display_options['fields']['field_art']['label'] = 'Art';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage/resources';
  $export['manage_teacher_resources'] = $view;

  return $export;
}
