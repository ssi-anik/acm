#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int testCaseRunning=1,totalTestCases;
    scanf("%d",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
        int sum=0,value;
        for(int i=1;i<=4;i++)
        {
            scanf("%d",&value);
            sum+=value;
        }
        int a[4];
        for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
        sort(a,a+3);
        sum+=(a[1]+a[2])/2;
        printf("Case %d: ",testCaseRunning);
        if(sum>= 90)
        printf("A");
        if(sum>= 80 && sum <90)
        printf("B");
        if(sum >= 70 &&  sum< 80)
        printf("C");
        if(sum >= 60  && sum< 70)
        printf("D");
        if(sum< 60)
        printf("F");
        printf("\n");

        ++testCaseRunning;
    }
    return 0;
}
