#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    unsigned long long count,a,b;
	double sqr = 0;
    a=b=0;
    count=0;

    while(scanf("%llu %llu",&a,&b) && (a!=0 && b!=0))
    {
		unsigned long long i=0;
		unsigned long long count1=0,count2=0;
        for(i=1;i<=b;i++)
        {
            sqr = pow((double)i,2);
            if(sqr<=b)
            ++count1;
        }
		for(i=1;i<a;i++)
		{
			sqr = pow((double)i,2);
			if(sqr<a)
				++count2;
		}
		printf("%llu\n",count1 - count2);

    }
    return 0;
}
