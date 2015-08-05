#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char zero[1000001],test[10];
    unsigned int i,j,tcase=0,c,n,it;
    while(scanf("%s",zero)!=EOF)
    {
        scanf("%s",test);
        it=atoi(test);
        printf("Case %u:\n",++tcase);
        c=1;
        while(c++<=it)
        {
            int yes=10;
            scanf("%u%u",&i,&j);
            if(i<j)
            {
                char d=zero[i];
                for(i;i<=j;i++)
                {
                    if(d!=zero[i])
                    {
                        yes=0;
                        break;
                    }
                }
            }
            else
            {
                char d=zero[j];
                for(j;j<=i;j++)
                {
                    if(d!=zero[j])
                    {
                        yes=0;
                        break;
                    }
                }
            }
            if(yes==0)
            printf("No\n");
            else
            printf("Yes\n");
        }
    }
    return 0;
}
