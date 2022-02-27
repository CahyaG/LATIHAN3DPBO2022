class Ram:
    def __init__(self, capacity = 0, price = 0):
        self.capacity = capacity
        self.price = price
    
    def getCapacity(self):
        return self.capacity

    def setCapacity(self, capacity):
        self.capacity = capacity

    def getPrice(self):
        return self.price
    
    def setPrice(self, price):
        self.price = price
    
    def printRam(self):
        print("Ram Capacity: {} GB".format(self.capacity))
        print("Ram Price: {}".format(self.price))
