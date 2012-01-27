<?php

/**
 * Implementation of hook_views_default_views().
 */
function simplenews_bounce_views_default_views() {

  /*
   * View 'bounces'
   */
  $view = new view;
  $view->name = 'simplenews_bounces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'simplenews_bounce';
  $view->human_name = 'Simplenews Bounces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bounces Report';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view simplenews bounce reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'bid' => 'bid',
    'bounce_type' => 'bounce_type',
    'mail' => 'mail',
    'rule_cat' => 'rule_cat',
    'rule_no' => 'rule_no',
    'body' => 'body',
    'subject' => 'subject',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'bid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'bounce_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rule_cat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rule_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Simplenews bounce: bid */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  /* Field: Simplenews bounce: rule_no */
  $handler->display->display_options['fields']['rule_no']['id'] = 'rule_no';
  $handler->display->display_options['fields']['rule_no']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['rule_no']['field'] = 'rule_no';
  $handler->display->display_options['fields']['rule_no']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rule_no']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rule_no']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rule_no']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rule_no']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['rule_no']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rule_no']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rule_no']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rule_no']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['rule_no']['format_plural'] = 0;
  /* Field: Simplenews bounce: rule_cat */
  $handler->display->display_options['fields']['rule_cat']['id'] = 'rule_cat';
  $handler->display->display_options['fields']['rule_cat']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['rule_cat']['field'] = 'rule_cat';
  $handler->display->display_options['fields']['rule_cat']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rule_cat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rule_cat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rule_cat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rule_cat']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['rule_cat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rule_cat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rule_cat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rule_cat']['hide_alter_empty'] = 1;
  /* Field: Simplenews bounce: bounce_type */
  $handler->display->display_options['fields']['bounce_type']['id'] = 'bounce_type';
  $handler->display->display_options['fields']['bounce_type']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['bounce_type']['field'] = 'bounce_type';
  $handler->display->display_options['fields']['bounce_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['bounce_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['bounce_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['bounce_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['bounce_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['bounce_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['bounce_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['bounce_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['bounce_type']['hide_alter_empty'] = 1;
  /* Field: Simplenews bounce: mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Simplenews bounce: subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  /* Field: Simplenews bounce: body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'simplenews_bounce';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/config/services/simplenews/bounces';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bounces Report';
  $handler->display->display_options['menu']['weight'] = '25';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Newsletters Bounces';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['simplenews_bounces'] = array(
    t('Master'),
    t('Bounces Report'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('bid'),
    t('.'),
    t(','),
    t('rule_no'),
    t('rule_cat'),
    t('bounce_type'),
    t('mail'),
    t('subject'),
    t('body'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
