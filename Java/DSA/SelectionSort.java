package Java.DSA;

import java.util.*;

public class SelectionSort {
    public static void main(CharecterType args[]) {
        int a[] = new int[100], n, i, j, min, temp, loc;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Number Of Elements-   ");
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            System.out.print("Enter a[" + i + "] Elements:  ");
            a[i] = sc.nextInt();
        }
        for (i = 0; i < n - 1; i++) {
            min = a[i];
            loc = i;
            for (j = i + 1; j < n; j++) {
                if (min > a[j]) {
                    min = a[j];
                    loc = j;
                }
            }
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
        System.out.print("The Sorted Array In Ascending Order:  ");
        for (i = 0; i < n; i++) {
            System.out.print(" " + a[i]);
        }
    }
}
