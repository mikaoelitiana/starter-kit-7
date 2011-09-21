<?php
/**
 * @file
 * configuration_geolocalisation.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function configuration_geolocalisation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gmap macro
  $permissions['create gmap macro'] = array(
    'name' => 'create gmap macro',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gmap_macro_builder',
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
