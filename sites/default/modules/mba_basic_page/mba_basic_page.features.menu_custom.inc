<?php
/**
 * @file
 * mba_basic_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mba_basic_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-mba-main-menu.
  $menus['menu-mba-main-menu'] = array(
    'menu_name' => 'menu-mba-main-menu',
    'title' => 'MBA main menu',
    'description' => 'The MBA section main menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MBA main menu');
  t('The MBA section main menu');


  return $menus;
}
