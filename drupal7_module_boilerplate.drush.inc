<?php

/**
 * Run using: drush d7mb you --repeat=10
 */

/**
 * Implements hook_drush_command().
 */
function drupal7_module_boilerplate_drush_command() {
  $items['d7-command'] = array(
    'description' => 'D7 Boilerplate Command',
    'aliases' => array('d7mb'),
    'callback' => 'drupal7_module_boilerplate_command',
    'arguments' => array(
      'who' => 'Who are we saying hello to (you or world).',
    ),
    'options' => array(
      'repeat' => 'Number of times to repeat the hello.',
    ),
  );

  return $items;
}

/**
 * Callback function.
 * @see drupal7_module_boilerplate_drush_command()
 */
function drupal7_module_boilerplate_command($who = false) {
  $text = "Hello ";
  if ($who) {
    $text.= $who;
  } else {
    $text.= "world";
  }

  $repeat = drush_get_option('repeat', 1);
  for ($i = 0; $i < $repeat; $i++) {
    drupal_set_message(t($text));
  }
}
