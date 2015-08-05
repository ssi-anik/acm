
package acm.pkg10523;

import java.math.BigInteger;
import java.util.Scanner;
public class Main {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            String Total = input.nextLine();
            String[] parts = Total.split(" ");
            int N = Integer.parseInt(parts[0]);
            BigInteger A = new  BigInteger(parts[1]);
            BigInteger sum = BigInteger.ZERO;
            int i;
            for(i=1;i<=N;i++)
            {
                sum = sum.add((A.pow(i)).multiply(BigInteger.valueOf(i)));
            }
            System.out.println(sum);
        }
    }
}
