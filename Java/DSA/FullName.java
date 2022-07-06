package Java.DSA;

import java.util.*;

public class FullName {
    public static void main(String args[]) {
        int i, c = 0, p;
        String ch, mid = "Kumar";
        char chr;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name- ");
        ch = sc.nextLine();
        p = ch.length();
        for (i = 0; i < p; i++) {
            chr = ch.charAt(i);
            if (chr == ' ') {
                break;
            } else {
                c = c + 1;
            }
        }
        System.out.println("The full name: " + ch.insert(c, mid));
    }
}
