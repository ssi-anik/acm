#include<stdio.h>
#include<iostream>
using namespace std;
unsigned long long getdiv(unsigned long long n)
{
    while(n>=1)
    {
        if(n%2==0)
        n/=2;
        else if(n%3==0)
        n/=3;
        else if(n%5==0)
        n/=5;
        else break;
    }
    return n;
}
main()
{
    unsigned long long i=4,count=3,n=0;
    for(;;)
    {
        n=getdiv(i);
        if(n==1)
        ++count;
        if(count==1500)
        break;
        else ++i;
    }
    printf("The 1500'th ugly number is 859963392.\t %llu. ",i);
}
