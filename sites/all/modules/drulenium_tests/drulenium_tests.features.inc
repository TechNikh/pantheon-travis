<?php
/**
 * @file
 * drulenium_tests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drulenium_tests_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "drulenium" && $api == "drulenium") {
    return array("version" => "1");
  }
}
