<?php
/**
 * @file
 * mba_basic_page.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mba_basic_page_user_default_roles() {
  $roles = array();

  // Exported role: mba.
  $roles['mba'] = array(
    'name' => 'mba',
    'weight' => 3,
  );

  return $roles;
}
