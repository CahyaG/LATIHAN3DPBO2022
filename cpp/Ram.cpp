#include <iostream>

using namespace std;

class Ram
{
private:
    int capacity;
    int price;

public:
    Ram() {}
    Ram(int capacity, int price)
    {
        this->capacity = capacity;
        this->price = price;
    }

    int getCapacity()
    {
        return this->capacity;
    }
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    int getPrice()
    {
        return this->price;
    }
    void setPrice(int price)
    {
        this->price = price;
    }

    void printRam()
    {
        cout << "Ram Capacity: " << this->capacity << " GB\n";
        cout << "Ram Price: " << this->price << endl;
    }
    ~Ram() {}
};