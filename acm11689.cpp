#include<stdio.h>

int main()
{
	long n,k,total,butt;
    long testCaseRunning=1,totalTestCase;
    scanf("%ld",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        scanf("%ld %ld %ld",&n,&butt,&k);
        n+=butt;
        total=0;butt=0;
        while(n>0)
        {
            butt+=n;
            n=butt/k;
            butt%=k;
            total+=n;
        }
        printf("%ld\n",total);
        ++testCaseRunning;
    }


	return 0;
}
