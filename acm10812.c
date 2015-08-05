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
