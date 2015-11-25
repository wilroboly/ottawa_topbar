<?php
/**
 * @file
 * ottawa_bootstrap_helper.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ottawa_topbar_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ottawa_common_bar';
  $context->description = 'City of Ottawa Common Elements Top Bar';
  $context->tag = 'ottawa_sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ottawa_topbar-ottawa_topbar' => array(
          'module' => 'ottawa_topbar',
          'delta' => 'ottawa_topbar',
          'region' => 'region_ottawa_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('City of Ottawa Common Elements Top Bar');
  t('ottawa_sitewide');
  $export['ottawa_common_bar'] = $context;

  return $export;
}
