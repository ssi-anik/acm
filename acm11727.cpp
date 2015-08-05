#include<stdio.h>

int main()
{
    int a,b,c;
    int testCaseRunning=1,totalTestCases=0;
    scanf("%d",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
            {
                if(b>c)
                printf("Case %d: %d\n",testCaseRunning,b);
                else
                printf("Case %d: %d\n",testCaseRunning,c);
            }
            else
            printf("Case %d: %d\n",testCaseRunning,a);
        }
        else if(b>c)
        {
            if(a>c)
            printf("Case %d: %d\n",testCaseRunning,a);
            else
            printf("Case %d: %d\n",testCaseRunning,c);
        }
        else
        printf("Case %d: %d\n",testCaseRunning,b);
        ++testCaseRunning;
    }
}
