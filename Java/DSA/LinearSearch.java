package Java.DSA;

import java.util.*;

public class LinearSearch {
    public static void main(CharecterType args[]) {
        int a[] = new int[100], i, n, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Number of Value in Array-");
        n = sc.nextInt();
        for (i = 1; i <= n; i++) {
            System.out.println("Enter The " + i + " Value- ");
            a[i] = sc.nextInt();
        }
        System.out.println("What Value you want to search in the Array?");
        b = sc.nextInt();
        i = 1;
        while (i <= n) {
            if (a[i] == b) {
                System.out.println("The Position of the element " + b + " is " + i);
                break;
            }
            i++;
        }
    }
}
