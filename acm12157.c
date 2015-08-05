#include<stdio.h>
#include<math.h>

int main()
{
	long inMile=10,inJuice=15;
	int testCaseRunning=1,totalTestCase;
	scanf("%d",&totalTestCase);
	while (testCaseRunning<=totalTestCase)
	{
		long x1,x2;
		x1=x2=0;
		int n,inCent=0;
		scanf("%d",&n);
		int i=0;
		for(i=1;i<=n;i++)
		{
			long time;
			scanf("%ld",&time);
			x1 += ((time/30)*10 + 10);
			x2 += ((time/60)*15 + 15);
		}
		printf("Case %d: ",testCaseRunning++);
		if(x1 < x2)
			printf("Mile %ld\n",x1);
		else if(x1 > x2)
			printf("Juice %ld\n",x2);
		else if(x1 == x2)
			printf("Mile Juice %ld\n",x1);
	}
	return 0;
}
