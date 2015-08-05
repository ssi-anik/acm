#include<stdio.h>

int main()
{

    int n,p,q,a[1001],i,j,k,t,count=0,sum=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);

        if(n<p)
            p=n;
        for(k=0;k<p;k++)
        {
            sum+=a[k];
            if(sum>q)
            break;
            count++;
        }
        printf("Case %d: %d\n",i+1,count);
        count=0;
        sum=0;

    }

    return 0;
}
