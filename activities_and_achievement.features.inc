<?php
/**
 * @file
 * activities_and_achievement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function activities_and_achievement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function activities_and_achievement_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function activities_and_achievement_node_info() {
  $items = array(
    'activities' => array(
      'name' => t('AnimeClub_Activities'),
      'base' => 'node_content',
      'description' => t('与田动漫社的活动预告和活动成果汇报'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'animeclub_achivement' => array(
      'name' => t('AnimeClub_achivement'),
      'base' => 'node_content',
      'description' => t('与田动漫社自成立以来所参加的比赛及主办活动相关'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wanted_advertisement' => array(
      'name' => t('Wanted Advertisement'),
      'base' => 'node_content',
      'description' => t('与田coser招募信息'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
