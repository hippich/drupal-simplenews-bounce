<?php
/**
 * Bounce settings.
 */
function simplenews_bounce_admin(&$form_state) {
  if (file_exists(libraries_get_path('PHPMailer-BHM') . '/index.php')) {
    $form['simplenews_bounce_handling'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable bounce handling for Simplenews newsletters'),
      '#default_value' => variable_get('simplenews_bounce_handling', 0),
    );
    $form['simplenews_bounce_email_address'] = array(
      '#type' => 'textfield',
      '#title' => t('email address'),
      '#required' => TRUE,
      '#default_value' => variable_get('simplenews_bounce_email_address', ''),
    );

    $form['simplenews_bounce_mailbox'] = array(
      '#type' => 'fieldset',
      '#title' => t('Mailbox for bounced mail'),
      '#description' => t('Simplenews Bounce will use this mailbox to retrieve and process bounces.'),
      '#collpased' => FALSE,
      '#collapsible' => TRUE,
    );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_keep_unprocessed'] = array(
        '#type' => 'checkbox',
        '#title' => t('Keep unprocessed e-mails'),
        '#description' => t('You may want to check this if this is not a dedicated mailbox for Simplenews Bounce module.'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_keep_unprocessed', 0),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_mailhost'] = array(
        '#type' => 'textfield',
        '#title' => t('Hostname'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_mailhost', ''),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_username'] = array(
        '#type' => 'textfield',
        '#title' => t('Username'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_username', ''),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_password'] = array(
        '#type' => 'textfield',
        '#title' => t('Password'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_password', ''),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_port'] = array(
        '#type' => 'textfield',
        '#title' => t('port'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_port', '143'),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_service'] = array(
        '#type' => 'textfield',
        '#title' => t('service'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_service', 'imap'),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_service_option'] = array(
        '#type' => 'textfield',
        '#title' => t('service_option'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_service_option', 'notls'),
        '#description' => t('the service options (none, tls, notls, ssl, etc.), default is \'notls\''),
      );
      $form['simplenews_bounce_mailbox']['simplenews_bounce_mailbox_boxname'] = array(
        '#type' => 'textfield',
        '#title' => t('boxname'),
        '#required' => TRUE,
        '#default_value' => variable_get('simplenews_bounce_mailbox_boxname', 'INBOX'),
      );
  }
  else {
    $form['simplenews_bounce_handling'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable bounce handling for Simplenews newsletters'),
      '#default_value' => 0,
      '#disabled' => TRUE,
      '#description' => t('You must install PHPMailer-BHM library first.'),
    );
  }

  return system_settings_form($form);
}
