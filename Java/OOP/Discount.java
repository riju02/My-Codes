package Java.OOP;

import java.util.*;

import javax.lang.model.util.ElementScanner14;

public class Discount {
    int cost;
    String name;
    double dc, amt;

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Name- ");
        name = sc.nextLine();
        System.out.print("Enter The Cost- ");
        cost = sc.nextInt();
    }

    public void cal() {
        if (cost > 5000 && cost <= 10000) {
            dc = cost * 0.1;
            amt = cost - dc;
        } else if (cost > 10000 && cost <= 15000) {
            dc = cost * 0.15;
            amt = cost - dc;
        } else if (cost > 15000) {
            dc = cost * 0.2;
            amt = cost - dc;
        } else {
            dc = 0;
            amt = cost;
        }
    }

    public void display() {
        if (dc == 0) {
            System.out.println("Name of The Customer\tDiscount\tAmount to be paid");
            System.out.print("" + name + "\t\t\tN.A.\t\t" + amt + "");
        } else {
            System.out.println("Name of The Customer\tDiscount\tAmount to be paid");
            System.out.print("" + name + "\t\t\t" + dc + "\t\t" + amt + "");
        }
    }

    public static void main(String args[]) {
        Discount x = new Discount();
        x.input();
        x.cal();
        x.display();
    }
}
