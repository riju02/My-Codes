package Java;

import java.util.*;

public class SecondLargestDigit {
    public static void main(String args[]) {
        int n, c = 0, a, b, i, d, e, ss;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Number- ");
        n = sc.nextInt();
        a = n;
        while (n != 0) {
            n = n / 10;
            c = c + 1;
        }
        System.out.println("The Length of the number is- " + c);
        b = a % 10;
        a = a / 10;
        d = a % 10;
        a = a / 10;
        while (n != 0) {
            e = a % 10;
            if (e < b) {
                d = b;
                b = e;
            } else if (e < d && e != b) {
                d = e;
            }
            a = a / 10;
        }
        System.out.println("The Second Largest- " + d);
    }
}