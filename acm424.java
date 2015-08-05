
package acm.pkg424;

import java.math.BigInteger;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger sum = BigInteger.ZERO;
        String s;
        while(true)
        {
            s = input.nextLine();
            if(s.charAt(0)== '0')
                break;
            else
            {
                sum = sum.add(new BigInteger(s));
            }
        }
        System.out.println(sum);
    }
}
