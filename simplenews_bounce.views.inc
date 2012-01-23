<?php
/**
 * Implements hook_views_data().
 */
function simplenews_bounce_views_data() {
  $data = array();

  $data['simplenews_bounce']['table']['group'] = t('Simplenews bounce');
  $data['simplenews_bounce']['table']['join'] = array(
    'simplenews_subscriptions' => array(
      'left_field' => 'mail',
      'field' => 'mail',
    ),
  );

  $data['simplenews_bounce']['bid'] = array(
    'title' => t('bid'),
    'help' => t('Bounce Id'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['simplenews_bounce']['rule_no'] = array(
    'title' => t('rule_no'),
    'help' => t('Bounce Rule Number'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['simplenews_bounce']['rule_cat'] = array(
    'title' => t('rule_cat'),
    'help' => t('Bounce Rule Category'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['simplenews_bounce']['bounce_type'] = array(
    'title' => t('bounce_type'),
    'help' => t('Bounce Type'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['simplenews_bounce']['mail'] = array(
    'title' => t('mail'),
    'help' => t('Bounced mail address'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
