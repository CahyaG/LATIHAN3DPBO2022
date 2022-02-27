#include <iostream>

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

class Pc
{
private:
    Processor processor;
    Disk disk;
    Ram ram;
    int totalPrice;

public:
    Pc() {}
    Pc(Processor processor, Disk disk, Ram ram)
    {
        this->processor = processor;
        this->disk = disk;
        this->ram = ram;
        this->totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice();
    }

    Processor getProcessor()
    {
        return this->processor;
    }
    void setProcessor(Processor processor)
    {
        this->processor = processor;
        this->setTotalPrice();
    }

    Disk getDisk()
    {
        return this->disk;
    }
    void setDisk(Disk disk)
    {
        this->disk = disk;
        this->setTotalPrice();
    }

    Ram getRam()
    {
        return this->ram;
    }
    void setRam(Ram ram)
    {
        this->ram = ram;
        this->setTotalPrice();
    }

    int getTotalPrice()
    {
        return this->totalPrice;
    }
    void setTotalPrice()
    {
        this->totalPrice = this->processor.getPrice() + this->disk.getPrice() + this->ram.getPrice();
    }

    void printPc()
    {
        this->processor.printProcessor();
        this->disk.printDisk();
        this->ram.printRam();
        cout << "Total Price: " << this->totalPrice << endl;
    }
    ~Pc() {}
};