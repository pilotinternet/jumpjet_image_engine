<?php

/**
 * Implementation of hook_strongarm().
 */
function jumpjet_image_engine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagefield_extended_checkboxes';
  $strongarm->value = '';

  $export['imagefield_extended_checkboxes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagefield_extended_textfields';
  $strongarm->value = 'jumpjet_img_credit|Image Credit';

  $export['imagefield_extended_textfields'] = $strongarm;
  return $export;
}
