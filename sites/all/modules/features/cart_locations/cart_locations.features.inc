<?php
/**
 * @file
 * cart_locations.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cart_locations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cart_locations_node_info() {
  $items = array(
    'cart_location' => array(
      'name' => t('Cart Location'),
      'base' => 'node_content',
      'description' => t('Schedule of cart locations'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
