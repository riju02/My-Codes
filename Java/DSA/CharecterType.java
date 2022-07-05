package Java.DSA;

import java.util.*;

public class CharecterType {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char chr;
        System.out.println("\n Enter a charecter- ");
        chr = sc.nextLine().charAt(0);
        if (Character.isLetter(chr) == true) {
            System.out.println(chr + " is a letter");
            if (Character.isUpperCase(chr) == true) {
                System.out.println(chr + " is an upper case character");
            }
            if (Character.isLowerCase(chr) == true) {
                System.out.println(chr + " is a lower case character");
            } else {
                if (Character.isDigit(chr) == true) {
                    System.out.println(chr + " is a digit");
                } else {
                    System.out.println(chr + " is a special character");
                }
            }
        }
    }
}
