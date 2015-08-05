#include<stdio.h>
#include<math.h>

int main()
{
    long long a,b,c,totalTestCases,testCaseRunning=1;
    scanf("%lld",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b)
        printf("OK\n");
        else
        printf("Wrong!!\n");
        ++testCaseRunning;
    }
    return 0;
}
