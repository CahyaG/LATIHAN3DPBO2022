<?php
class Disk
{
    private $type;
    private $capacity;
    private $price;

    public function __construct($type = "", $capacity = 0, $price = 0)
    {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    public function getType()
    {
        return $this->type;
    }

    public function setType($type)
    {
        $this->type = $type;
    }

    public function getCapacity()
    {
        return $this->capacity;
    }

    public function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }

    public function getPrice()
    {
        return $this->price;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function printDisk()
    {
        echo "Disk Type: " . $this->type . "<br/>";
        echo "Disk Capacity: " . $this->capacity . " GB<br/>";
        echo "Disk Price: " . $this->price . "<br/>";
    }
}
