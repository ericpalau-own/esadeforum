<?php
/**
 * @file
 * mba_basic_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mba_basic_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-mba-main-menu_home:node/1
  $menu_links['menu-mba-main-menu_home:node/1'] = array(
    'menu_name' => 'menu-mba-main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'menu-mba-main-menu_home:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-mba-main-menu_what-is:node/4
  $menu_links['menu-mba-main-menu_what-is:node/4'] = array(
    'menu_name' => 'menu-mba-main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'What is?',
    'options' => array(
      'identifier' => 'menu-mba-main-menu_what-is:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-mba-main-menu_where-is:node/5
  $menu_links['menu-mba-main-menu_where-is:node/5'] = array(
    'menu_name' => 'menu-mba-main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Where is?',
    'options' => array(
      'identifier' => 'menu-mba-main-menu_where-is:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('What is?');
  t('Where is?');


  return $menu_links;
}
