$Id$

DESCRIPTION
-----------

Simplenews Bounce handles email bounces for simplenews.

The module is currently EXPERIMENTAL as is not used at any site at all.
All users of this module are encouraged to share their experiences, suggestions,
code and installation details in the modules issue queue. As this will be the
only way to get a working release of this module.

Although this module can be converted to handle bounces of all site emails it
is currently build for simplenews only.

More info on: http://en.wikipedia.org/wiki/VERP


REQUIREMENTS
------------

 * Simplenews module
 * Pearl


INSTALLATION
------------

 1. Install the module as usual.
 
 2. Check the README.txt in the included folder verphandler for further
    instruction.


IMCOMPATIBILITIES
-----------------

The 6.x version of this module is not compatible with any module which defines
an 'smtp_library'. Known incompatible modules:
- Mime mail
- SMTP
- Returnpath

This module is based on patches by AjK in http://drupal.org/node/242137


