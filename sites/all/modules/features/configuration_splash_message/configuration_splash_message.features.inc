<?php
/**
 * @file
 * configuration_splash_message.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function configuration_splash_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
