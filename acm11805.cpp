#include<stdio.h>

int main()
{
    int testCaseRunning=1,totalTestCase;

    scanf("%d",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        printf("Case %d: ",testCaseRunning);
        int N,K,P;
        scanf("%d %d %d\n",&N,&K,&P);
        if((K+P)%N==0)
        printf("%d\n",N);
        else
        printf("%d\n",((K+P)%N));
        ++testCaseRunning;
    }

    return 0;
}
