/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg11448;

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
        int testCaseRunning = 1,
                totalTestCase = 0;
        Scanner scan = new Scanner(System.in);
        totalTestCase = scan.nextInt();
        while(testCaseRunning++<=totalTestCase)
        {
            BigInteger A = scan.nextBigInteger();
            BigInteger B = scan.nextBigInteger();
            System.out.println(A.subtract(B));
        }
    }
}
