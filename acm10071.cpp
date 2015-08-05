#include<stdio.h>
main()
{
    unsigned int t;
    long int v,s=0;
    while(scanf("%ld%u",&v,&t)!=EOF)
    {
        s=2*(v*t);
        printf("%ld\n",s);
    }
    return 0;
}
