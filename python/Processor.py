class Processor:
    def __init__(self, name="", price = 0):
        self.name = name
        self.price = price

    def getName(self):
        return self.name
    
    def setName(self, name):
        self.name = name

    def getPrice(self):
        return self.price

    def setPrice(self, price):
        self.price = price

    def printProcessor(self):
        print("Processor Name: {}".format(self.name))
        print("Processor Price: {}".format(self.price))