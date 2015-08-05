/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg748;

import java.math.BigDecimal;
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
        BigDecimal R ; 
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext())
        {
            R = scan.nextBigDecimal();
            int n = scan.nextInt();
            R = R.pow(n);
            String str = R.toPlainString();
            String[] tokens = str.split("\\.");
            BigInteger x = new BigInteger(tokens[0]);
            if(x.compareTo(BigInteger.ZERO)==0) {
                System.out.print(".");
            }
            else
            {
                System.out.print(x+".");
            }
            int i=1;
            for(i=tokens[1].length()-1;i>=0;i--)
            {
                if(tokens[1].charAt(i)!='0')
                {
                    break;
                }
            }
            for(int j = 0 ; j<=i;j++)
                System.out.print(tokens[1].charAt(j));
            System.out.println();
        }
    }
}
