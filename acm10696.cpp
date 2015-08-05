#include<stdio.h>

int main()
{
    unsigned long n;

    while(scanf("%lu",&n)==1)
    {
        if(n==0)
        return 0;

        if(n>100)
        printf("f91(%lu) = %lu\n",n,n-10);
        else
        printf("f91(%lu) = 91\n",n);
    }

    return 0;
}
