
package acm10494;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        BigInteger a,b;
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            String s = input.nextLine();
            String[] x = s.split(" ");
            a = new BigInteger(x[0]);
            char c = x[1].charAt(0);
            b = new BigInteger(x[2]);
            if(c=='%') {
                a = a.mod(b);
            }
            else {
                a = a.divide(b);
            }
            System.out.println(a);
        }
    }
}
