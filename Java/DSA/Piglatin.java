package Java.DSA;

import java.util.*;

public class Piglatin {
    public static void main(String args[]) {
        int x, y;
        String str1, str2, str;
        char b = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("The Pig Latin word of the given string ");
        str = sc.nextLine();
        x = str.length();
        for (y = 0; y < x; y++) {
            b = (str.charAt(y));
            if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O'
                    || b == 'U') {
                break;
            }
        }
        str1 = str.substring(y, x);
        str2 = str.substring(0, y);
        System.out.println(str1 + str2 + "ay");
    }
}
