<?php
class Processor
{
    private $name;
    private $price;

    public function __construct($name = "", $price = 0)
    {
        $this->name = $name;
        $this->price = $price;
    }

    public function getName()
    {
        return $this->name;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    public function getPrice()
    {
        return $this->price;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function printProcessor()
    {
        echo "Processor Name: " . $this->name . "<br/>";
        echo "Processor Price: " . $this->price . "<br/>";
    }
}
