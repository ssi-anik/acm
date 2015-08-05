
package acm12541;

import java.util.Scanner;
import java.util.TreeMap;

public class Main {

    public static void main(String[] args) {
        TreeMap<String , String > map = new TreeMap<String,String>();
        Scanner inp = new Scanner(System.in);
        
        int testCaseRunning=1,totalTestCase;
        totalTestCase = inp.nextInt();
        while(testCaseRunning++<=totalTestCase)
        {
            inp.nextLine();
            String name;
            name = inp.next();
            int date,mon,year;
            date = inp.nextInt();
            mon = inp.nextInt();
            year = inp.nextInt();
            String Final = "";
            Final = Integer.toString(year);
            if(mon<10) {
                Final = (Final+"0")+Integer.toString(mon);
            }
            else {
                Final = Final+Integer.toString(mon);
            }
            if(date<10) {
                Final = (Final+"0")+Integer.toString(date);
            }
            else {
                Final = Final+Integer.toString(date);
            }
            map.put(Final, name);
        }
        System.out.println(map.get(map.lastKey())+"\n"+map.get(map.firstKey()));
    }
}
