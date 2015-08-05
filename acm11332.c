/*For example, consider n = 1234567892. Then:

f(n) = 1+2+3+4+5+6+7+8+9+2 = 47
f(f(n)) = 4+7 = 11
f(f(f(n))) = 1+1 = 2
Therefore, g(1234567892) = 2.

Each line of input contains a single positive integer n at most 2,000,000,000. For each such integer, you are to output a single line containing g(n). Input is terminated by n = 0 which should not be processed.

Sample input

2
11
47
1234567892
0
Output for sample input

2
2
2
2
*/
#include<stdio.h>
main()
{
    unsigned long long a;
    while(scanf("%llu",&a))
    {
        unsigned long long tv=0;
        if(a==0)
        break;

        else if(a<10)
        printf("%llu\n",a);
        else
        {
             while(a>=10)
				{
						tv+=(a%10);
						a/=10;
						if(a<10)
						tv+=a;
				}
				while(tv>=10)
				{
				    a=tv;
				    tv=0;
				    while(a>=10)
                    {
                            tv+=(a%10);
                            a/=10;
                            if(a<10)
                            tv+=a;
                    }
				}
				printf("%llu\n",tv);
        }

    }
    return 0;
}
