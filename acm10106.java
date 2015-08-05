
package biginteger;

import java.math.BigInteger;        
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s1,s2;
        
        while(input.hasNextLine())
        {
            s1 = input.nextLine();
            s2 = input.nextLine();
            BigInteger bI1 = new BigInteger(s1);
            BigInteger bI2 = new BigInteger(s2);
            System.out.println(bI1.multiply(bI2));
        }
        
    }
}
