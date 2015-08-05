/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm.pkg10473;

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
        while(true)
        {
            boolean hexa = false;
            String str = scan.next();
            str = str.toLowerCase();
            if(str.contains("0x")==true) {
                hexa = true;
            }
            long x = 1 ;
            if(hexa == false) {
                x = Long.parseLong(str);
            }
            
            if(x<0) {
                break;
            }
            if(hexa==true)
            {
                str = str.substring(2,str.length());
                System.out.println(Long.valueOf(str,16));
            }
            else
            {
                System.out.println("0x"+Long.toHexString(x).toUpperCase());
            }
            
        }
    }
}
