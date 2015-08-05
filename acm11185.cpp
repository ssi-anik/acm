/*Problem K
Ternary
Input: Standard Input
Output: Standard Output
You will be given a decimal number. You will have to convert it to its ternary (Base 3) equivalent.

Input
The input file contains at most 100 lines of inputs. Each line contains a non-negative decimal integer N(N<1000000001). Input is terminated by a line containing a negative value. This line should not be processed.

Output
For each line of input produce one line of output. This line contains the ternary equivalent of decimal value N.
Input:
10
100
1000
-1
output:
101
10201
1101001
*/
#include<stdio.h>
main()
{
    signed long num,trinary[34];
    while(scanf("%ld",&num))
    {
        if(num<0)
        break;
        int i,mod,div;
        i=mod=div=0;
        for(;;)
        {
            mod=num%3;
            trinary[i]=mod;
            div=num/3;
            if(div==0)
            break;
            else
            {
                num=div;
                i++;
            }
        }
        for(i;i>=0;--i)
        printf("%ld",trinary[i]);
        printf("\n");
    }
    return 0;
}
