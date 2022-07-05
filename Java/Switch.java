package Java;

import java.util.*;

public class Switch {
    public static void main(String args[]) {
        int ch, a, b, s;
        Scanner sc = new Scanner(System.in);
        System.out.println("Press 1 For Sum");
        System.out.println("Press 2 For Substraction");
        System.out.println("Enter Your Selection- ");
        ch = sc.nextInt();
        switch (ch) {
            case 1:
                System.out.println("\n Enter Two Number For Sum- ");
                a = sc.nextInt();
                b = sc.nextInt();
                s = a + b;
                System.out.println("Sum- " + s);
                break;
            case 2:
                System.out.println("\n Enter Two Number For Substraction- ");
                a = sc.nextInt();
                b = sc.nextInt();
                s = a - b;
                System.out.println("Substraction- " + s);
                break;
            default:
                System.out.println("You Gave a wrong input");
                break;
        }

    }

}
