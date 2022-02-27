class Disk:
    def __init__(self, type = "", capacity = 0, price = 0):
        self.type = type
        self.capacity = capacity
        self.price = price

    def getType(self):
        return self.type

    def setType(self, type):
        self.type = type

    def getCapacity(self):
        return self.capacity

    def setCapacity(self, capacity):
        self.capacity = capacity
    
    def getPrice(self):
        return self.price

    def setPrice(self, price):
        self.price = price

    def printDisk(self):
        print("Disk Type: {}".format(self.type))
        print("Disk Capacity: {} GB".format(self.capacity))
        print("Disk Price: {}".format(self.price))