

package acm.pkg10433;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext())
        {
            String n = scan.next();
            if(n.compareTo("0")==0 || n.compareTo("1")==0)
            {
                System.out.println("Not an Automorphic number.");
                continue;
            }
            BigInteger b = new BigInteger(n);
            b = b.multiply(b);
            String out = b.toString();
            int x = out.length() - n.length();
            if(x>0)
            out = out.substring(x,out.length());
            if(out.compareTo(n)==0)
            {
                System.out.println("Automorphic number of "+n.length()+"-digit.");
            }
            else
            {
                System.out.println("Not an Automorphic number.");
            }
            
        }
    }
}
