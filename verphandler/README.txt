
DESCRIPTION
-----------

verphandler.pl is the perl script that handles bounces coming in. Now, I'm a
sendmail person so I can only describe this in sendmail terminology. Exim,
Postfix, etc, you will have to work out what's needed for your MTA.


INSTALLATION
------------

 1. This file may be moved to a location where is can be accessed by your
    MTA. Make sure it can still access your Drupal database.

 2. Setup an MX domain, eg. verp.example.com and have all mails for that
    domain directed to an MTA that can "pipe" mails to a script. In sendmail
    you would have in the /etc/mail/virtusertable file:

        @verp.example.com verpalias

    And in the /etc/mail/aliases file you have:

        verpalias: |/path/to/verphandler.pl

 3. Set verphandler.pl persmissions: chmod 755

 4. You require Perl DBD/DBI database libraries.

 5. Edit the parameters in the top of the verphandler.pl file to set the access
    to the Drupal database.
    
    As a security measure create a MySQL user that is allowed access to
    the simplenews_verp table only. Use this use to allow verphandler.pl to
    connect to your Drupal database (see the top of the file that requires config).

    Grant MySQL access:

        GRANT ALL ON mydrupaldb.simplenews_verp TO `myuser`@`mymtahost` IDENTIFIED BY `mypass`


