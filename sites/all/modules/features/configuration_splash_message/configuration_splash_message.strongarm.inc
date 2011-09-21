<?php
/**
 * @file
 * configuration_splash_message.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function configuration_splash_message_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'my_splash_height';
  $strongarm->value = '600';
  $export['my_splash_height'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'my_splash_msg';
  $strongarm->value = '<h3>Add the page to <a href="http://api.drupal.org/api/function/hook_menu/6" rel="nofollow">hook_menu</a></h3>
<p>Once you have created the function with your settings form, you need to define a URL within Drupal for your settings page. This is done by implementing Drupal\'s <a href="http://api.drupal.org/api/function/hook_menu/6" rel="nofollow">hook_menu</a>. In our <a href="http://api.drupal.org/api/function/hook_menu/6" rel="nofollow">hook_menu</a> implementation, we will return an array which describes to Drupal which URL path to use, the title to display, the function to call to generate the page, and the permissions required.</p>
<p>We would like only administrators to be able to access this page, so we\'ll place the permissions check for the module here in <a href="http://api.drupal.org/api/function/hook_menu/6" rel="nofollow">hook_menu</a> so that Drupal can itself check the appropriate permission. To minimize the number of permissions an administrator has to deal with, we\'re going to use the global administration permission for administrating our module instead of creating a new custom permission.</p>';
  $export['my_splash_msg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'my_splash_title';
  $strongarm->value = 'Welcome';
  $export['my_splash_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'my_splash_width';
  $strongarm->value = '800';
  $export['my_splash_width'] = $strongarm;

  return $export;
}
