package Java.DSA;

import java.util.*;

public class InsertAnElement {
    public static void main(CharecterType args[]) {
        int n, i, b, a[] = new int[100], d;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Range Of The Array- ");
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            System.out.print(" Enter The Element in Position " + i + "- ");
            a[i] = sc.nextInt();
        }
        System.out.println("The Array is- ");
        for (i = 0; i < n; i++) {
            System.out.print(" " + a[i]);
        }
        System.out.println("Enter The Element you want to insert- ");
        b = sc.nextInt();
        System.out.println("Enter The Position Where you want to insert the element " + b + "- ");
        d = sc.nextInt();
        while (i >= d && i < n - 1) {
            a[i + 1] = a[i];
            i--;
        }
        a[d] = b;
        System.out.println("The New Array is- ");
        for (i = 0; i < n + 1; i++) {
            System.out.print(" " + a[i]);
        }
    }
}
