#include<stdio.h>
#include<stdlib.h>
main()
{
    char in1[10],in2[10];
    unsigned long long m,n;
    while(scanf("%s%s",in1,in2)!=EOF)
    {
        m=atoi(in1);
        n=atoi(in2);
        printf("%llu\n",(m*n - 1));
    }
    return 0;
}
