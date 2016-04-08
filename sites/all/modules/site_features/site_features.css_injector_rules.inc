<?php
/**
 * @file
 * site_features.css_injector_rules.inc
 */

/**
 * Implements hook_css_injector_rule().
 */
function site_features_css_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'h2-green-to-white';
  $rule->admin_description = 'H2 green to white';
  $rule->css = '.content h2{
  color: white;
}';
  $rule->media = 'all';
  $rule->preprocess = 0;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['h2-green-to-white'] = $rule;

  return $export;
}
