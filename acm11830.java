/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg11830;

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
        String s1,s2;
        while(true)
        {
            s1 = scan.next();
            s2 = scan.next();
            if(s1.compareTo("0")==0 && s2.compareTo("0")==0)
                break;
            String[] parts = s2.split(s1);
            s2="";
            for(String part : parts)
                s2+=part;
            if(s2.compareTo("")==0)
                s2="0";
            BigInteger b = new BigInteger(s2);
            System.out.println(b);
        }
    }
}
