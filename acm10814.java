/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg10814;

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
        Scanner scan = new Scanner(System.in);
        BigInteger x , y ;
        char c ; 
        int testCaseRunning = 1 ,
            totalTestCaes = scan.nextInt();
        while(testCaseRunning++<=totalTestCaes)
        {
            x = scan.nextBigInteger();
            String s = scan.next();
            c = s.charAt(0);
            y = scan.nextBigInteger();
            BigInteger div = x.gcd(y);
            BigInteger divx = x.divide(div),
                       divy = y.divide(div);
            System.out.println( divx + " " + c + " " + divy);
            
        }
    }
}
