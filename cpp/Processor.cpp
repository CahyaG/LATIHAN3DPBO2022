#include <iostream>

using namespace std;

class Processor
{
private:
    string name;
    int price;

public:
    Processor() {}
    Processor(string name, int price)
    {
        this->name = name;
        this->price = price;
    }

    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }

    int getPrice()
    {
        return this->price;
    }
    void setPrice(int price)
    {
        this->price = price;
    }

    void printProcessor()
    {
        cout << "Processor Name: " << this->name << endl;
        cout << "Processor Price: " << this->price << endl;
    }
    ~Processor() {}
};