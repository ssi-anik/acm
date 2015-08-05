#include<stdio.h>
unsigned long long cyclelen=0;
unsigned long long cycle(unsigned long long n)
{
    if(n==1)
    {
        ++cyclelen;
        return cyclelen;
    }

    else if(n%2==0)
    {
        ++cyclelen;
        return cycle(n/2);
    }

    else if(n%2==1)
    {
        ++cyclelen;
        return cycle(3*n+1);
    }
}
int main()
{
    unsigned long long int start,i,j,max,temp;
    start=i=j=max=temp=0;
    while(scanf("%llu%llu",&i,&j)!=EOF && (i!=0 && j!=0))
    {
        max=0;
        if(i<j)
        {
            for(start=i;start<=j;start++)
            {
                cyclelen=0;
                cycle(start);
                if(max<cyclelen)
                {
                    max=cyclelen;
                }
            }
        }

        else
        {
            for(start=j;start<=i;start++)
            {
                cyclelen=0;
                cycle(start);
                if(max<cyclelen)
                {
                    max=cyclelen;
                }
            }
        }
        printf("%llu %llu %llu\n",i,j,max);

    }
    return 0;
}
