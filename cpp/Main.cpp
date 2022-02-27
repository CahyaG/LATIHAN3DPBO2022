#include <iostream>
#include <string>

#include "Pc.cpp"

using namespace std;

int main()
{
    string pName, dType;
    int pPrice, dCapacity, dPrice, rCapacity, rPrice;
    cout << "============INPUT============\n";
    cout << "Processor Name: ";
    getline(cin, pName);
    cout << "Processor Price: ";
    cin >> pPrice;
    cout << "Disk Type (SSD/HDD): ";
    cin >> dType;
    cout << "Disk Capacity (GB): ";
    cin >> dCapacity;
    cout << "Disk Price: ";
    cin >> dPrice;
    cout << "Ram Capacity (GB): ";
    cin >> rCapacity;
    cout << "Ram Price: ";
    cin >> rPrice;

    Processor myProcessor(pName, pPrice);
    Disk myDisk(dType, dCapacity, dPrice);
    Ram myRam(rCapacity, rPrice);

    Pc myPc(myProcessor, myDisk, myRam);
    cout << "\n============OUTPUT============\n";
    myPc.printPc();
    return 0;
}
