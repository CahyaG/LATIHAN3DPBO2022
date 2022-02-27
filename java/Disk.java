
class Disk {
    private String type;
    private int capacity;
    private int price;

    public Disk(String type, int capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    public Disk() {
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public void printDisk() {
        System.out.println("Disk Type: " + this.type);
        System.out.println("Disk Capacity: " + this.capacity + " GB");
        System.out.println("Disk Price: " + this.price);
    }

}
