#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n,m;

    while(scanf("%d",&n)==1)
    {

        if(n<0)
        return 0;

        m=ceil(log(n)/log(2));

        printf("Case %d: %d\n",i,m);
        i++;
    }
    return 0;
}
