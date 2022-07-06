package Java.DSA;

import java.util.*;

public class Alphabets {
    public static void main(String args[]) {
        int i, j, p;
        char ch;
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Input- ");
        str = sc.nextLine();
        p = str.length();
        for (i = 65; i <= 90; i++) {
            for (j = 0; j < p; j++) {
                ch = str.charAt(j);
                if (ch == (char) i || ch == (char) (i + 32)) {
                    System.out.print(ch);
                }
            }
        }
    }
}
