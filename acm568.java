/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm568;

import java.math.BigInteger;
import java.util.Scanner;
import java.util.TreeMap;

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
        Scanner keyboard = new Scanner(System.in);
        BigInteger x = BigInteger.ONE;
        TreeMap<Long,BigInteger> tmap = new TreeMap<Long,BigInteger>();
        long i=0;
        while(i<=10000)
        {
            tmap.put(i,x);
            ++i;
            x = x.multiply(BigInteger.valueOf(i));
            
        }
        while(keyboard.hasNext())
        {
            i = keyboard.nextLong();
            System.out.printf("%5d -> ",(int)i);
            x = tmap.get(i);
            String s = x.toString();
            char c = '0';
            for(i=s.length();i>=0;i--)
            {
                c = s.charAt((int)i - 1);
                if(c!='0') {
                    break;
                }
            }
            System.out.println(c);
        }
    }
}
