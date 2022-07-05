package Java.DSA;

import java.util.*;

public class DeleteAnElement {
    public static void main(CharecterType args[]) {
        int n, a[] = new int[100], i, j, num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Value Of Range-   ");
        n = sc.nextInt();
        System.out.println("Enter Value of An Array- ");
        for (i = 0; i < n; i++) {
            System.out.print("\n Enter The Value Of a[" + i + "]    ");
            a[i] = sc.nextInt();
        }
        for (i = 0; i < n; i++) {
            System.out.println("a[" + i + "]-   " + a[i]);
        }
        System.out.print("Enter The  Position What You Want To Delete-   ");
        j = sc.nextInt();
        if (j >= n + 1) {
            System.out.print("Deletation is not Possible");
        } else {
            for (i = j - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
        }
        System.out.println("Resultant Array is-   ");
        for (i = 0; i < n - 1; i++) {
            System.out.println("a[" + i + "]-   " + a[i]);
        }
    }
}
