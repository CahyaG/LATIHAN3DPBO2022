from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc:

    def __init__(self, processor, disk, ram):
        self.processor = processor
        self.disk = disk
        self.ram = ram
        self.totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice()

    def getProcessor(self):
        return self.processor
    
    def setProcessor(self, processor):
        self.processor = processor

    def getDisk(self):
        return self.disk

    def setDisk(self, disk):
        self.disk = disk

    def getRam(self):
        return self.ram

    def setRam(self, ram):
        self.ram = ram

    def getTotalPrice(self):
        return self.totalPrice

    def setTotalPrice(self):
        self.totalPrice = self.processor.getPrice() + self.disk.getPrice() + self.ram.getPrice()

    def printPc(self):
        self.processor.printProcessor()
        self.disk.printDisk()
        self.ram.printRam()
        print("Total Price: {}".format(self.totalPrice))