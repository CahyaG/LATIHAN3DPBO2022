<?php
include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc
{
    private Processor $processor;
    private Disk $disk;
    private Ram $ram;
    private $totalPrice;

    public function __construct(Processor $processor, Disk $disk, Ram $ram)
    {
        $this->processor = $processor;
        $this->disk = $disk;
        $this->ram = $ram;
        $this->totalPrice = $processor->getPrice() + $disk->getPrice() + $ram->getPrice();
    }

    public function getProcessor()
    {
        return $this->processor;
    }

    public function setProcessor(Processor $processor)
    {
        $this->processor = $processor;
        $this->setTotalPrice();
    }

    public function getDisk()
    {
        return $this->disk;
    }

    public function setDisk(Disk $disk)
    {
        $this->disk = $disk;
        $this->setTotalPrice();
    }

    public function getRam()
    {
        return $this->ram;
    }

    public function setRam(Ram $ram)
    {
        $this->ram = $ram;
        $this->setTotalPrice();
    }

    public function getTotalPrice()
    {
        return $this->totalPrice;
    }

    public function setTotalPrice()
    {
        $this->totalPrice = $this->processor->getPrice() + $this->disk->getPrice() + $this->ram->getPrice();
    }

    public function printPc()
    {
        $this->processor->printProcessor();
        $this->disk->printDisk();
        $this->ram->printRam();
        echo "Total Price: " . $this->totalPrice . "<br/>";
    }
}
