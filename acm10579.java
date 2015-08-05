
import java.math.BigInteger;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {

    public static void main(String[] args) {
        BigInteger x = BigInteger.ONE,y = BigInteger.ONE ;
        TreeMap<Long,BigInteger> tmap = new TreeMap<Long,BigInteger>();
        long i=1;
        tmap.put((long)1,x);
        tmap.put((long)2,y);
        for(i=3;i<=5000;i++)
        {
            y = x.add(tmap.get(i-1));
            x = tmap.get(i-1);
            tmap.put(i,y);
        }
        Scanner input = new Scanner(System.in);
        while(input.hasNextLong())
        {
            i = input.nextLong();
            System.out.println(tmap.get(i));
        }
        
    }
}
