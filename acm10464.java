/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg10464;

import java.math.BigDecimal;
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
        BigDecimal x ,y ;
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext())
        {
            int toatlTestCase = scan.nextInt(),
                testCaseRunning = 1;
            while(testCaseRunning++<=toatlTestCase)
            {
                x = scan.nextBigDecimal();
                y = scan.nextBigDecimal();
                x = x.add(y);
                String output = x.toString();
                String[] spl = output.split("\\.");
                System.out.print(spl[0]+".");
                int i=1;
                for(i=spl[1].length()-1;i>=0;i--)
                {
                    if(spl[1].charAt(i)!='0') {
                        break;
                    }
                    
                }
                if(i<0) {
                    System.out.println("0");
                }
                else
                {
                    for(int j=0;j<=i;j++)
                    {
                        System.out.print(spl[1].charAt(j));
                    }
                    System.out.println();
                }
            }
        }
    }
}
