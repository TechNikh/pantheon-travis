<?php
/**
 * @file
 * feature_a.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_a_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "css_injector" && $api == "css_injector_rules") {
    return array("version" => "1");
  }
  if ($module == "drulenium" && $api == "drulenium") {
    return array("version" => "1");
  }
}
