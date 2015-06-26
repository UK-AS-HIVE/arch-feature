<?php
/**
 * @file
 * arch_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function arch_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|field_collection_item|field_file_descriptors|form';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_file_descriptors';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_file',
      1 => 'field_label',
      2 => 'field_description',
      3 => 'group_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-container field-group-htabs',
      ),
    ),
  );
  $export['group_container|field_collection_item|field_file_descriptors|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|art|form';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => '_add_existing_field',
      1 => 'group_main',
      2 => 'group_files',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-container field-group-htabs',
      ),
    ),
  );
  $export['group_container|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|section|form';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_main',
      1 => 'group_dimensions',
      2 => 'group_files',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-container field-group-htabs',
      ),
    ),
  );
  $export['group_container|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dimensions|node|section|form';
  $field_group->group_name = 'group_dimensions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Dimensions',
    'weight' => '13',
    'children' => array(
      0 => 'field_width',
      1 => 'field_height',
      2 => 'field_x',
      3 => 'field_y',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dimensions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_dimensions|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|art|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '8',
    'children' => array(
      0 => 'field_file_descriptors',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-files field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_files|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|section|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '14',
    'children' => array(
      0 => 'field_file_descriptors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-files field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_files|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|art|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '7',
    'children' => array(
      0 => 'field_picture',
      1 => 'field_sections',
      2 => 'field_small_image',
      3 => 'title',
      4 => 'field_intro_blurb',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_main|node|art|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|section|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '12',
    'children' => array(
      0 => 'field_art',
      1 => 'field_inner_text',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_main|node|section|form'] = $field_group;

  return $export;
}
