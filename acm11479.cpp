#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long  a,b,c;
    int totalTestCase,testCaseRunning=1;
    scanf("%d",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
		if (a<=0 || b<=0 || c<=0)
		{
			printf("Case %d: Invalid\n",testCaseRunning);
		}
        else if((a+b)>c && (a+c)>b && (b+c)>a)
        {
            if(a==b && b==c && c==a)
				printf("Case %d: Equilateral\n",testCaseRunning);

			else if(a==b  || b==c || c==a)
				printf("Case %d: Isosceles\n",testCaseRunning);

			else if(a!=b && b!=c && c!=a)
				printf("Case %d: Scalene\n",testCaseRunning);
		}

		else
		{
			printf("Case %d: Invalid\n",testCaseRunning);
		}
        ++testCaseRunning;
    }
    return 0;
}
