package Java.OOP;

import java.util.*;

import java.util.*;;

public class Library {
    String name;
    int price;
    int day;
    double fine;

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Book Name- ");
        name = sc.nextLine();
        System.out.print("Enter Book Price- ");
        price = sc.nextInt();
        System.out.print("Enter Number Of Day Book Borrowed- ");
        day = sc.nextInt();
    }

    public void cal() {
        if (day < 7) {
            fine = day * 0.25;
        } else if (day >= 8 && day <= 15) {
            fine = 7 * 0.25 + (day - 7) * 0.40;
        } else if (day >= 8 && day <= 15) {
            fine = 7 * 0.25 + (day - 7) * 0.40;
        } else if (day >= 16 && day <= 30) {
            fine = 7 * 0.25 + 8 * 0.40 + (day - 15) * 0.60;
        } else {
            fine = 7 * 0.25 + 8 * 0.40 + 15 * 0.60 + (day - 30) * 0.80;
        }
    }

    public void display() {
        if (day == 0) {
            System.out.print("No Fine");
        } else {
            System.out.print("The Fine is- " + fine);
        }
    }

    public static void main(String args[]) {
        Library x = new Library();
        x.input();
        x.cal();
        x.display();
    }
}
