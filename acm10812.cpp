#include<stdio.h>

int main()
{
    long long t,i,a,b,c,d;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        c=(a-b)/2;
        d=a-c;
        if(a<b || (a-b)%2)
            printf("impossible\n");
        else
            printf("%lld %lld\n",d,c);
    }

    return 0;
}

/*
#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long sum , ind;
	int testCaseRunning=1,
		totalTestCase;
	scanf("%d",&totalTestCase);
	while (testCaseRunning++ <=totalTestCase)
	{
		scanf("%lu %lu",&sum,&ind);
		if(sum < ind || ( sum+ind)%2==1)
		{
			printf("impossible\n");
			continue;
		}
		unsigned long total = sum + ind;
		total /= 2;
		printf("%lu %lu\n",total,total-ind);
	}
	return 0;
}
*/