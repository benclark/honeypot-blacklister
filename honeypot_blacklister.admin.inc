<?php

/**
 * @file
 */

/**
 * Admin settings for honeypot_blacklister.
 */
function honeypot_blacklister_admin_form($form, &$form_state) {
  $form['honeypot_blacklister_count_threshold'] = array(
    '#type' => 'textfield',
    '#title' => t('Honeypot Blacklister count threshold'),
    '#description' => t('Maximum number of Honeypot validation failures tolerated before adding IP to the system blacklist.'),
    '#default_value' => variable_get('honeypot_blacklister_count_threshold', 50),
    '#required' => TRUE,
    '#size' => 5,
  );

  return system_settings_form($form);
}
