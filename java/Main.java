
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String pName = "", dType = "";
        int pPrice = 0, dCapacity = 0, dPrice = 0, rCapacity = 0, rPrice = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("============INPUT============");
        try {
            System.out.print("Processor Name: ");
            pName = sc.nextLine();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Processor Price: ");
            pPrice = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Disk Type(SSD/HDD): ");
            dType = sc.next();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Disk Capacity (GB): ");
            dCapacity = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Disk Price: ");
            dPrice = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Ram Capacity (GB): ");
            rCapacity = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.print("Ram Price: ");
            rPrice = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        Processor myProcessor = new Processor(pName, pPrice);
        Disk mydDisk = new Disk(dType, dCapacity, dPrice);
        Ram myRam = new Ram(rCapacity, rPrice);
        Pc myPc = new Pc(myProcessor, mydDisk, myRam);
        System.out.println("\n============OUTPUT============");
        myPc.printPc();
    }
}
