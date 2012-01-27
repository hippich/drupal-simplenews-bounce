DESCRIPTION
-----------
Simplenews Bounce handles email bounces for simplenews.

The module is currently EXPERIMENTAL as it has not been tested properly
All users of this module are encouraged to share their experiences, suggestions,
code and installation details in the modules issue queue. As this will be the
only way to get a working release of this module.

This module leverage PHPMailer-BMH to detect bounces. Currently, rules are hardcoded 
in this library, therefore you are welcome to file an issue at 
https://github.com/hippich/PHPMailer-BMH/issues if particular email is not detected as
bounce (e.g. having Rule_No = 0)

REQUIREMENTS
------------
 * Simplenews - http://drupal.org/project/simplenews/
 * Mimemail - http://drupal.org/project/mimemail
 * Libraries - http://drupal.org/project/libraries
 * Views - http://drupal.org/project/views
 * PHPMailer-BMH (Bounce Mail Handler) - https://github.com/hippich/PHPMailer-BMH

INSTALLATION
------------
 1. Download and extract PHPMailer-BMH library to /sites/all/libraries/PHPMailer-BMH/ folder.
 1. Install all required modules as usual.
 3. Install Simplenews Bounces module as usual.
 2. Check the configuration - /admin/config/services/simplenews/bounce - for further steps.
 5. Report available at - /admin/config/services/simplenews/bounces

