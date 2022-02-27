#include <iostream>

using namespace std;

class Disk
{
private:
    string type;
    int capacity;
    int price;

public:
    Disk() {}
    Disk(string type, int capacity, int price)
    {
        this->type = type;
        this->capacity = capacity;
        this->price = price;
    }

    string getType()
    {
        return this->type;
    }
    void setType(string type)
    {
        this->type = type;
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

    void printDisk()
    {
        cout << "Disk Type: " << this->type << endl;
        cout << "Disk Capacity: " << this->capacity << " GB\n";
        cout << "Disk Price: " << this->price << endl;
    }
    ~Disk() {}
};