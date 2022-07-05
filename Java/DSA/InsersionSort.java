package Java.DSA;

import java.util.*;

public class InsersionSort {
    public static void main(CharecterType args[]) {
        int a[] = new int[100], n, i, j, min, temp, loc;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Range For Your Array- ");
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            System.out.print("Enter a[" + i + "] Elements:  ");
            a[i] = sc.nextInt();
        }
        for (i = 1; i <= n - 1; i++) {
            temp = a[i];
            j = i - 1;
            while (temp < a[j] && j >= 0) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = temp;
        }
        System.out.println("The Sorted List:  ");
        for (i = 0; i < n; i++) {
            System.out.print(" " + a[i]);
        }
    }
}