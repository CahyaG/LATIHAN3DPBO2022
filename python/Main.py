from Pc import Pc
from Processor import Processor
from Disk import Disk
from Ram import Ram

print("============INPUT============")
pName = str(input("Processor Name: "))
pPrice = int(input("Processor Price: "))
dType = str(input("Disk Type (HDD/SSD): "))
dCapacity = int(input("Disk Capacity (GB): "))
dPrice = int(input("Disk Price: "))
rCapacity = int(input("Ram Capacity (GB): "))
rPrice = int(input("Ram Price: "))

myProcessor = Processor(pName, pPrice)
myDisk = Disk(dType, dCapacity, dPrice)
myRam = Ram(rCapacity, rPrice)

myPc = Pc(myProcessor, myDisk, myRam)
print("\n============OUTPUT============")
myPc.printPc()