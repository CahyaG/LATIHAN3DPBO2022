<?php
include "Pc.php";

$myProcessor = new Processor("Intel Core I5", 800000);
$myDisk = new Disk("HDD", 1024, 500000);
$myRam = new Ram(8, 1000000);
$myPc = new Pc($myProcessor, $myDisk, $myRam);

$myPc->printPc();
