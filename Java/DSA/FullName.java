package Java.DSA;

import java.util.*;

public class FullName {
    public static void main(String args[])// Enter name
    {
        int i, c = 0, p;
        char chr;
        StringBuffer m = new StringBuffer();
        p = m.length();
        for (i = 0; i < p; i++) {
            chr = m.charAt(i);
            if (chr == ' ') {
                break;
            } else {
                c++;
            }
        }
        System.out.println("The full name: " + m.insert(c, "KUMAR"));
    }
}
