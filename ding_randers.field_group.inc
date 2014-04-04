<?php
/**
 * @file
 * ding_randers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_randers_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_eresource_content|node|ding_eresource|form';
  $field_group->group_name = 'group_ding_eresource_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_eresource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '2',
    'children' => array(
      0 => 'field_ding_eresource_body',
      1 => 'field_ding_eresource_lead',
      2 => 'field_ding_eresource_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_eresource_content|node|ding_eresource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eresource_categorization|node|ding_eresource|form';
  $field_group->group_name = 'group_eresource_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_eresource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '4',
    'children' => array(
      0 => 'field_ding_eresource_category',
      1 => 'field_ding_eresource_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eresource_categorization|node|ding_eresource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eresource_images|node|ding_eresource|form';
  $field_group->group_name = 'group_eresource_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_eresource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_ding_eresource_link',
      1 => 'field_ding_eresource_list_image',
      2 => 'field_ding_eresource_title_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eresource_images|node|ding_eresource|form'] = $field_group;

  return $export;
}
