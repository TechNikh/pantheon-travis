<?php
/**
 * @file
 * drulenium_tests.drulenium.inc
 */

/**
 * Implements hook_default_drulenium_preset().
 */
function drulenium_tests_default_drulenium_preset() {
  $export = array();

  $drulenium_preset = new stdClass();
  $drulenium_preset->disabled = FALSE; /* Edit this to true to make a default drulenium_preset disabled initially */
  $drulenium_preset->api_version = 1;
  $drulenium_preset->name = 'search';
  $drulenium_preset->description = '';
  $drulenium_preset->category = 'Regression';
  $drulenium_preset->settings = array(
    'pages' => array(
      'path' => array(
        'custom' => '<front>',
      ),
      'node' => array(
        'custom' => array(
          'article' => 0,
          'page' => 0,
        ),
      ),
      'term' => array(
        'custom' => array(
          1 => 0,
        ),
      ),
      'drulenium_settings_all_plugins__pages__active_tab' => 'edit-drulenium-settings-all-plugins-pages-path',
    ),
    'blockly' => array(
      'data' => '<xml xmlns="http://www.w3.org/1999/xhtml"><block type="fill_textbox" id="pr-.1GD`MIY=)OVlsLq}" x="88" y="14"><field name="locator_type">id</field><field name="locator">edit-search-block-form--2</field><field name="text">drupal</field><next><block type="click_button" id="gM)T)EH{^E1s;r=D%[4z"><field name="locator_type">id</field><field name="locator">edit-submit</field><next><block type="take_screenshot" id="Mw8*@X~U|u{exvZE%V#f"><field name="snapshot_mode">include</field><field name="locator_type">css</field><field name="locator">.content</field></block></next></block></next></block></xml>',
    ),
    'plugins' => array(
      'drulenium_filltextbox_0' => array(
        'type' => 'drulenium_filltextbox',
        'weight' => 0,
        'description' => array(
          'locator_type' => 'id',
          'locator' => 'edit-search-block-form--2',
          'text' => 'drupal',
        ),
      ),
      'drulenium_clickbutton_1' => array(
        'type' => 'drulenium_clickbutton',
        'weight' => 1,
        'description' => array(
          'locator_type' => 'id',
          'locator' => 'edit-submit',
        ),
      ),
      'drulenium_takescreenshot_2' => array(
        'type' => 'drulenium_takescreenshot',
        'weight' => 2,
        'description' => array(
          'snapshot_mode' => 'include',
          'locator_type' => 'css',
          'locator' => '.content',
        ),
      ),
    ),
  );
  $export['search'] = $drulenium_preset;

  return $export;
}
