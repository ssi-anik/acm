#include<stdio.h>
main()
{
    unsigned long long i=0,input[100],n=0,sum;

    while(scanf("%llu",&input[n]))
    {
        if(input[n]==0)
        break;
        else
        ++n;
    }
    printf("PERFECTION OUTPUT\n");
    while(i<n)
    {
        int j;
        sum=0;
        for(j=1;j<input[i];j++)
        if(input[i]%j==0)
        sum+=j;

        if(sum<input[i])
        printf("%5llu  DEFICIENT\n",input[i]);
        else if(sum>input[i])
        printf("%5llu  ABUNDANT\n",input[i]);
        else if(sum==input[i])
        printf("%5llu  PERFECT\n",input[i]);
        ++i;

    }
    printf("END OF OUTPUT\n");
    return 0;
}
