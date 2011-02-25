#!/usr/bin/perl 
#
#

use DBI;

my $db_user = "verptest";
my $db_pass = "verptest";
my $db_name = "sn";
my $db_host = "81.19.55.19";
my $db_port = 54210;
my $db_prefix = "";

###########################
# Do not edit below here. #
###########################

sub getnum {
  use POSIX qw(strtod);
  my $str = shift;
  $str =~ s/^\s+//;
  $str =~ s/\s+$//;
  $! = 0;
  my($num, $unparsed) = strtod($str);
  if (($str eq '') || ($unparsed != 0) || $!) {
    return;
  } else {
    return $num;
  } 
} 

sub is_numeric { defined getnum($_[0]) } 

# Read in the email from the MTA on stdin

# Read "in" in paragraphs...
$/ = '';

# Read the email header
my $header = <STDIN>;

# Read the email body. Not needed as we only need the
# header but lets soak up stdin so the MTA doesn't 
# complain if we attempt to quit before it's done
# with the pipe.
my $body   = "";
while (<STDIN>) { $body .= <STDIN>; }

# Prepare vars we will use later to known state.
my $from = "";
my $to = "";
my $subject = "";
my $snid = 0;
my $domain = '';

# Parse the  header
$_ = $header;
if (/From: ([^\r\n]+)/)    { $from = $1;    }
if (/Subject: ([^\r\n]+)/) { $subject = $1; }
if (/To: ([^\r\n]+)/)      { $to = $1;      }

($snid, $domain) = split /\@/, $to;

if (is_numeric($snid) && $snid > 0) {

  # Connect to the database
  $dbh = DBI->connect ("DBI:mysql:$db_name:$db_host:$db_port", $db_user, $db_pass);
  if (!defined($dbh)) {
    # We could exit with 75 and have our local MTA requeue the
    # mail for another try later. But is there really any point
    # to that? Just fix your DB connection instead :)
    exit(0);
  }

  $sql = "INSERT INTO ". $db_prefix ."simplenews_verp SET snid = ?, created = ?, subject = ?";
  $rset1 = $dbh->prepare($sql);
  $rset1->execute($snid, time(), $subject);
  $dbh->disconnect;
}

exit(0);

