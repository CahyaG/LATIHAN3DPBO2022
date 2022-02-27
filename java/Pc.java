
class Pc {
    private Processor processor;
    private Disk disk;
    private Ram ram;
    private int totalPrice;

    public Pc(Processor processor, Disk disk, Ram ram) {
        this.processor = processor;
        this.disk = disk;
        this.ram = ram;
        this.totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice();
    }

    public Pc() {
    }

    public Processor getProcessor() {
        return processor;
    }

    public void setProcessor(Processor processor) {
        this.processor = processor;
        this.setTotalPrice();
    }

    public Disk getDisk() {
        return disk;
    }

    public void setDisk(Disk disk) {
        this.disk = disk;
        this.setTotalPrice();
    }

    public Ram getRam() {
        return ram;
    }

    public void setRam(Ram ram) {
        this.ram = ram;
        this.setTotalPrice();
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void setTotalPrice() {
        this.totalPrice = this.processor.getPrice() + this.disk.getPrice() + this.ram.getPrice();
    }

    public void printPc() {
        this.processor.printProcessor();
        this.disk.printDisk();
        this.ram.printRam();
        System.out.println("Total Price: " + this.totalPrice);
    }
}
