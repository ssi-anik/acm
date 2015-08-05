#include<stdio.h>
main()
{
    long long int counter,sum=1,i=1;
    while(scanf("%lld",&counter))
    {
        if(counter<0)
        break;
        sum=1;
        for(i=1;i<=counter;i++)
        sum+=i;

        printf("%lld\n",sum);
    }
    return 0;
}
