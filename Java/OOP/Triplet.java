package Java.OOP;

import java.util.*;

public class Triplet {
    int a, b, c, d, e;

    public void getdata() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The First Number- ");
        a = sc.nextInt();
        System.out.print("Enter The Second Number- ");
        b = sc.nextInt();
        System.out.print("Enter The Third Number- ");
        c = sc.nextInt();
    }

    public void findprint() {
        d = (a * a) + (b * b);
        e = c * c;
        if (d == e) {
            System.out.println("The Triples are Pythagorean Triples.");
        } else {
            System.out.println("The Triples are not Pythagorean Triples.");
        }
    }

    public static void main(String args[]) {
        Triplet x = new Triplet();
        x.getdata();
        x.findprint();
    }
}
