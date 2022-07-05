package Java.OOP;

import java.util.*;

public class Employee {
    int pan;
    String name;
    double taxincome, tax;

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Name- ");
        name = sc.nextLine();
        System.out.print("Enter Pan Number- ");
        pan = sc.nextInt();
        System.out.print("Enter Income- ");
        taxincome = sc.nextDouble();
    }

    public void cal() {
        if (taxincome > 250000 && taxincome <= 500000) {
            tax = ((taxincome - 250000) * 0.1);
        } else if (taxincome > 500000 && taxincome <= 1000000) {
            tax = 30000 + ((taxincome - 500000) * 0.2);
        } else if (taxincome > 1000000) {
            tax = 50000 + ((taxincome - 1000000) * 0.3);
        } else {
            tax = 0;
        }
    }

    public void display() {
        if (tax == 0) {
            System.out.println("Pan Number\tName\t\tTax Income\tTax");
            System.out.print("" + pan + "\t  " + name + "\t" + taxincome + "\tNo Tax");
        } else {
            System.out.println("Pan Number\tName\t\tTax Income\tTax");
            System.out.print("" + pan + "\t  " + name + "\t" + taxincome + "\t" + tax + "");
        }
    }

    public static void main(String args[]) {
        Employee x = new Employee();
        x.input();
        x.cal();
        x.display();
    }
}
