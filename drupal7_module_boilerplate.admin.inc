<?php

/**
 */
function drupal7_module_boilerplate_admin_settings() {
  $form = array();

  $form['drupal7_module_boilerplate_limit'] = array(
    '#type' => 'textfield',
    '#title' => 'Maximum number of links to content',
    '#default_value' => variable_get('drupal7_module_boilerplate_limit', 10),
    '#size' => 2,
    '#maxlength' => 2,
  );

  return system_settings_form($form);
}

/**
 */
function drupal7_module_boilerplate_admin_validate($form, &$form_state) {
  $limit = $form_state['values']['drupal7_module_boilerplate_limit'];

  if (!is_numeric($limit)) {
    form_set_error('drupal7_module_boilerplate_limit', t('You must enter an integer for the maximum number of links.'));
  } elseif($limit<0) {
    form_set_error('drupal7_module_boilerplate_limit', t('Maximum number of links must be a positive number.'));
  }
}

