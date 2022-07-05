package Java.OOP;

import java.util.*;

public class AreaOfTriangle {
    int a, b, h;

    public void getdata() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Base Value- ");
        b = sc.nextInt();
        System.out.print("Enter The Base Value- ");
        h = sc.nextInt();
    }

    public void Calculate() {
        a = (b * h) / 2;
    }

    public void Display() {
        System.out.print("The Area is- " + a);
    }

    public static void main(String args[]) {
        AreaOfTriangle x = new AreaOfTriangle();
        x.getdata();
        x.Calculate();
        x.Display();
    }
}
