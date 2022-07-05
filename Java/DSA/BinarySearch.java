package Java.DSA;

import java.util.*;

public class BinarySearch {
    public static void main(CharecterType args[]) {
        int a[] = new int[100], c[] = new int[100], i, n, b, flag = 0, l, u, mid;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Range For Your Array- ");
        n = sc.nextInt();
        l = 0;
        u = n - 1;
        for (i = 0; i < n; i++) {
            System.out.println("Enter the sorted value in Position " + i + " Value- ");
            a[i] = sc.nextInt();
        }
        i = 0;
        System.out.println("Enter The Value you want to search- ");
        b = sc.nextInt();
        while (i < n && b != 0) {
            mid = (l + u) / 2;
            if (b == a[i]) {
                flag = 1;
                break;
            } else if (b < a[i]) {
                l = mid + 1;
            } else {
                u = mid - 1;
            }
            i++;
        }
        if (flag == 1) {
            System.out.println("The element " + b + " found in the position " + i);
        }
    }
}