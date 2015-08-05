#include<stdio.h>
main()
{
    int no_of_test_cases,i=1;
    unsigned long long a,b,n,sum=0;
    scanf("%d",&no_of_test_cases);
    while(i<=no_of_test_cases)
    {
        sum=0;
        scanf("%llu%llu",&a,&b);
        for(n=a;n<=b;n++)
        {
            if(n&1)
            sum+=n;
        }
        printf("Case %d: %llu\n",i,sum);
        i++;
    }
    return 0;
}
