package Java.DSA;

import java.util.*;

public class MergeArray {
    public static void main(CharecterType args[]) {
        int n, a[] = new int[100], b[] = new int[100], c[] = new int[100], n1, n2, j, k, i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Range-  ");
        n1 = sc.nextInt();
        for (i = 0; i < n1; i++) {
            System.out.print("\n Enter The Value Of a[" + i + "]   ");
            a[i] = sc.nextInt();
        }
        System.out.print("Enter The Range For Second Array-  ");
        n2 = sc.nextInt();
        for (j = 0; j < n2; j++) {
            System.out.print("Enter The Value Of b[" + i + "]    ");
            b[j] = sc.nextInt();
        }
        i = 0;
        j = 0;
        k = 0;
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                c[k] = a[i];
                i++;
                k++;
            } else {
                c[k] = b[j];
                j++;
                k++;
            }
        }
        while (i < n1) {
            c[k] = a[i];
            i++;
            k++;
        }
        while (j < n2) {
            c[k] = b[j];
            j++;
            k++;
        }
        System.out.println("Final Array is-  ");
        for (i = 0; i < n1 + n2; i++) {
            System.out.print(" " + c[i]);
        }
    }
}
