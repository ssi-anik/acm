#include<stdio.h>
#include<math.h>

int main()
{
    long long i=0;
    double d = 0;
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning++<=totalTestCase)
    {
        long long input;
        scanf("%lld",&input);
		if(input==1)
			d=1;
		else
        for(i=1;i<=input;i++)
        d+=log10((double)i);
        printf("%.0lf\n",ceil(d));
        d=0;
    }

    return 0 ;
}
