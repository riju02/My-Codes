package Java.DSA;

import java.util.*;

public class BubbleSort {
    public static void main(CharecterType args[]) {
        int a[] = new int[100], n, i, j, t;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Range For Your Array- ");
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            System.out.print("\n Please Enter The Value Of Element " + i + ": ");

            a[i] = sc.nextInt();
        }
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++)

            {
                if (a[j] > a[j + 1]) {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
        System.out.println("\n Array after implementing bubble sort: ");
        for (i = 0; i < n; i++) {
            System.out.print(" " + a[i]);
        }
    }
}