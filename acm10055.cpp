#include<stdio.h>
int main()
{
    unsigned long has,opp;
    while(scanf("%lu%lu",&has,&opp)!=EOF)
    {
        if(has>=opp)
        printf("%lu\n",(has-opp));
        else
        {
            printf("%lu\n",(opp-has));
        }
        has=opp=0;
    }
    return 0;
}
