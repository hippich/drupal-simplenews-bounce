DESCRIPTION
-----------
Simplenews Bounce handles email bounces for simplenews.

The module is currently EXPERIMENTAL as it has not been tested properly
All users of this module are encouraged to share their experiences, suggestions,
code and installation details in the modules issue queue. As this will be the
only way to get a working release of this module.

Although this module can be used to handle bounces of all site emails it
is currently build for simplenews only. Only enable if you know what you are doing.

REQUIREMENTS
------------
 * simplenews
 * mimemail

INSTALLATION
------------
 1. Install the module as usual.
 2. Check the configuration for further steps

IMCOMPATIBILITIES
-----------------
This module is not compatible with any module which defines an 'smtp_library' other then mimemail.
Known incompatible modules: (this list is not complete)
 * SMTP
 * Returnpath
 * htmlmail
