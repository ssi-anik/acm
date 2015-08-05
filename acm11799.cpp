#include<stdio.h>

int main()
{
    int testCaseRunnning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunnning<=totalTestCase)
    {
        int N,i,min=0,H;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d",&H);
            if(min<H)
            min=H;
        }

        printf("Case %d: %d\n",testCaseRunnning,min);
        ++testCaseRunnning;
    }
    return 0;
}
