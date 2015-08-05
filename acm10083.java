/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg10083;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Anik
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt ()) {
            int t = sc.nextInt ();
            int a = sc.nextInt ();
            int b = sc.nextInt ();

            System.out.printf ( "(%d^%d-1)/(%d^%d-1) " , t, a, t, b);

            
            if (t == 1 ) 
            {
              System.out.println ("is not an integer with less than 100 digits." );
               continue ;
            }

            
            if (a%b != 0 ) 
            {
              System.out.println ("is not an integer with less than 100 digits." );
               continue ;
            }

            
            if (a == b) 
            {
              System.out.println ("1");
               continue ;
            }

            if ((a - b) * Math.log10 (t)> 99.0 ) 
            {
              System.out.println ("is not an integer with less than 100 digits." );
               continue;
            }

            BigInteger T_bi = new BigInteger (Integer.toString (t));
            BigInteger one = BigInteger.ONE;
            BigInteger calc = T_bi.pow(a).subtract(one).divide(T_bi.pow(b).subtract(one));

            if(calc.toString().length() >= 100 )
            {
              System.out.println ( "is not an integer with less than 100 digits." );
            }
            else 
            {
              System.out.println (calc);
            }
          }
    }
}
