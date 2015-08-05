
package acm.pkg11879;

import java.math.BigInteger;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        BigInteger b1;
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            String s = input.nextLine();
            if(s.compareTo("0")==0) {
                break;
            }
            b1 = new BigInteger(s);
            if(b1.mod(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO)==0){
                System.out.println("1");
            }
            else
                System.out.println("0");
                
                
        }
    }
}
