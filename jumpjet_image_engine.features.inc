<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jumpjet_image_engine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}


