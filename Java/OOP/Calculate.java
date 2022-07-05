package Java.OOP;

import java.util.*;

public class Calculate {
    int a, b, s, d;

    public void inputdata() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The First Value- ");
        a = sc.nextInt();
        System.out.print("Enter The Second Value- ");
        b = sc.nextInt();
    }

    public void calculate() {
        s = a + b;
        d = a - b;
    }

    public void outdata() {
        System.out.println("The Addition Value is- " + s);
        System.out.println("The Difference is- " + d);
    }

    public static void main(String args[]) {
        Calculate x = new Calculate();
        x.inputdata();
        x.calculate();
        x.outdata();
    }
}
