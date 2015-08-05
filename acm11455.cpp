#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long  testCaseRunning=1,totalTestCases;
    scanf("%lld",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
        long long  a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(!(a&&b&&c&&d))
        printf("banana\n");
        else if(a==b && b==c && c==d && d==a)
        printf("square\n");
        else if(((a==b)&&(c==d))||(a==c && b==d) || (a==d && b==c))
        printf("rectangle\n");
        else if( a+b+c >= d && a+b+d >=c && a+c+d >= b && b+c+d>=a  )
        printf("quadrangle\n");
        else
        printf("banana\n");

        ++testCaseRunning;
    }
    return 0;
}

