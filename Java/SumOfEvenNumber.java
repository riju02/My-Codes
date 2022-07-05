package Java;

import java.util.*;

public class SumOfEvenNumber {
    public static void main(String args[]) {
        int s = 0, n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Range- ");
        n = sc.nextInt();
        int i = 0;
        while (i <= n) {
            if (i % 2 == 0) {
                s = s + i;
            }
            i++;
        }
        System.out.println("Sum of even number in the range '0-" + n + "' = " + s);
    }
}
