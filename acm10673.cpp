#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    unsigned long long x,k,floorValue,ceilValue;
    int testCaseRunning=1 , totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning++<=totalTestCase)
    {
        scanf("%llu %llu",&x,&k);
		floorValue = (unsigned long long) floor((double) x / (double) k);
		ceilValue = (unsigned long long) ceil((double) x / (double) k);
		if(floorValue+ceilValue==x)
			printf("1 1\n");
		else
		{
			if(ceilValue - floorValue == 1)
				printf("-%llu %llu\n",x,x);
			else
			{
				printf("0 %llu\n",(unsigned long long) ( x / ceilValue));
			}
		}
    }
    return 0;
}
