<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jumpjet_image_engine_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer imagecrop
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: crop any image with toolbox
  $permissions['crop any image with toolbox'] = array(
    'name' => 'crop any image with toolbox',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: crop images with toolbox
  $permissions['crop images with toolbox'] = array(
    'name' => 'crop images with toolbox',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_01col
  $permissions['view imagecache jumpjet_img_01col'] = array(
    'name' => 'view imagecache jumpjet_img_01col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_01col_1-1-square
  $permissions['view imagecache jumpjet_img_01col_1-1-square'] = array(
    'name' => 'view imagecache jumpjet_img_01col_1-1-square',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_01col_3-4-portrait
  $permissions['view imagecache jumpjet_img_01col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_01col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_01col_4-3-landscape
  $permissions['view imagecache jumpjet_img_01col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_01col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_02col
  $permissions['view imagecache jumpjet_img_02col'] = array(
    'name' => 'view imagecache jumpjet_img_02col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_02col_1-1-square
  $permissions['view imagecache jumpjet_img_02col_1-1-square'] = array(
    'name' => 'view imagecache jumpjet_img_02col_1-1-square',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_02col_3-4-portrait
  $permissions['view imagecache jumpjet_img_02col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_02col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_02col_4-3-landscape
  $permissions['view imagecache jumpjet_img_02col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_02col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_03col
  $permissions['view imagecache jumpjet_img_03col'] = array(
    'name' => 'view imagecache jumpjet_img_03col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_03col_1-1-square
  $permissions['view imagecache jumpjet_img_03col_1-1-square'] = array(
    'name' => 'view imagecache jumpjet_img_03col_1-1-square',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_03col_16-9-landscape
  $permissions['view imagecache jumpjet_img_03col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_03col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_03col_3-4-portrait
  $permissions['view imagecache jumpjet_img_03col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_03col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_03col_4-3-landscape
  $permissions['view imagecache jumpjet_img_03col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_03col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_04col
  $permissions['view imagecache jumpjet_img_04col'] = array(
    'name' => 'view imagecache jumpjet_img_04col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_04col_1-1-square
  $permissions['view imagecache jumpjet_img_04col_1-1-square'] = array(
    'name' => 'view imagecache jumpjet_img_04col_1-1-square',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_04col_16-9-landscape
  $permissions['view imagecache jumpjet_img_04col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_04col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_04col_3-4-portrait
  $permissions['view imagecache jumpjet_img_04col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_04col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_04col_4-3-landscape
  $permissions['view imagecache jumpjet_img_04col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_04col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_05col
  $permissions['view imagecache jumpjet_img_05col'] = array(
    'name' => 'view imagecache jumpjet_img_05col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_05col_16-9-landscape
  $permissions['view imagecache jumpjet_img_05col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_05col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_05col_3-4-portrait
  $permissions['view imagecache jumpjet_img_05col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_05col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_05col_4-3-landscape
  $permissions['view imagecache jumpjet_img_05col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_05col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_06col
  $permissions['view imagecache jumpjet_img_06col'] = array(
    'name' => 'view imagecache jumpjet_img_06col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_06col_16-9-landscape
  $permissions['view imagecache jumpjet_img_06col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_06col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_06col_3-4-portrait
  $permissions['view imagecache jumpjet_img_06col_3-4-portrait'] = array(
    'name' => 'view imagecache jumpjet_img_06col_3-4-portrait',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_06col_4-3-landscape
  $permissions['view imagecache jumpjet_img_06col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_06col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_07col
  $permissions['view imagecache jumpjet_img_07col'] = array(
    'name' => 'view imagecache jumpjet_img_07col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_07col_16-9-landscape
  $permissions['view imagecache jumpjet_img_07col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_07col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_07col_4-3-landscape
  $permissions['view imagecache jumpjet_img_07col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_07col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_08col
  $permissions['view imagecache jumpjet_img_08col'] = array(
    'name' => 'view imagecache jumpjet_img_08col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_08col_16-9-landscape
  $permissions['view imagecache jumpjet_img_08col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_08col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_08col_4-3-landscape
  $permissions['view imagecache jumpjet_img_08col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_08col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_08col_banner
  $permissions['view imagecache jumpjet_img_08col_banner'] = array(
    'name' => 'view imagecache jumpjet_img_08col_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_09col
  $permissions['view imagecache jumpjet_img_09col'] = array(
    'name' => 'view imagecache jumpjet_img_09col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_09col_16-9-landscape
  $permissions['view imagecache jumpjet_img_09col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_09col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_09col_4-3-landscape
  $permissions['view imagecache jumpjet_img_09col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_09col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_10col
  $permissions['view imagecache jumpjet_img_10col'] = array(
    'name' => 'view imagecache jumpjet_img_10col',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_10col_16-9-landscape
  $permissions['view imagecache jumpjet_img_10col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_10col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_10col_4-3-landscape
  $permissions['view imagecache jumpjet_img_10col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_10col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_10col_banner
  $permissions['view imagecache jumpjet_img_10col_banner'] = array(
    'name' => 'view imagecache jumpjet_img_10col_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_11col_16-9-landscape
  $permissions['view imagecache jumpjet_img_11col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_11col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_11col_4-3-landscape
  $permissions['view imagecache jumpjet_img_11col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_11col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_12col_16-9-landscape
  $permissions['view imagecache jumpjet_img_12col_16-9-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_12col_16-9-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_12col_4-3-landscape
  $permissions['view imagecache jumpjet_img_12col_4-3-landscape'] = array(
    'name' => 'view imagecache jumpjet_img_12col_4-3-landscape',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_12col_banner
  $permissions['view imagecache jumpjet_img_12col_banner'] = array(
    'name' => 'view imagecache jumpjet_img_12col_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_14col_banner
  $permissions['view imagecache jumpjet_img_14col_banner'] = array(
    'name' => 'view imagecache jumpjet_img_14col_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache jumpjet_img_16col_banner
  $permissions['view imagecache jumpjet_img_16col_banner'] = array(
    'name' => 'view imagecache jumpjet_img_16col_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
