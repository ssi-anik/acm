
package acm10925;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] n ;
        int testCaseRunning=1;
        while(true){
            String s = input.nextLine();
            if(s.compareTo("0 0")==0) 
            {
                break;
            }
            else
            {
                n = s.split(" ");
            }
            int N = Integer.parseInt(n[0]);
            BigInteger F = new BigInteger(n[1]);
            BigInteger sum = BigInteger.ZERO;
            for(int i=1;i<=N;i++)
            {
                sum=sum.add(new BigInteger(input.nextLine()));
            }
            System.out.println("Bill #"+testCaseRunning++ +" costs "+sum+": each friend should pay "+sum.divide(F));
            System.out.println();
        }
    }
}
