<?php
/**
 * @file
 * site_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "css_injector" && $api == "css_injector_rules") {
    return array("version" => "1");
  }
}
