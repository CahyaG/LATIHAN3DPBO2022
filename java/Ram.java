class Ram {
    private int capacity;
    private int price;

    public Ram(int capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    public Ram() {
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

    public void printRam() {
        System.out.println("Ram Capacity: " + this.capacity + " GB");
        System.out.println("Ram Price: " + this.price);
    }

}
