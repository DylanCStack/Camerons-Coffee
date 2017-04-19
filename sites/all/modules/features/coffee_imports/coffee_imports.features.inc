<?php
/**
 * @file
 * coffee_imports.features.inc
 */

/**
 * Implements hook_views_api().
 */
function coffee_imports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function coffee_imports_node_info() {
  $items = array(
    'coffee_import' => array(
      'name' => t('Coffee Import'),
      'base' => 'node_content',
      'description' => t('Use Coffee Imports to display exotic new brands of coffee!'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Enter all the information about the new coffee import.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
