#include<stdio.h>
int main()
{
    long int i,j,n1,n2,max=0,l,temp;
    while(scanf("%ld %ld",&n1,&n2)==2)
    {
        printf("%ld %ld ",n1,n2);
        max=0;
        if(n2<n1)
        {
            temp=n2;
            n2=n1;
            n1=temp;
        }

        for(j=n1;j<=n2;j++)
        {
            i=j;
            l=1;

            while(i!=1)
            {
                if(i%2==0)
                    i=i/2;
                else
                    i = 3*i+1;

                l++;
            }
            if(l>max)
                max=l;

        }
        printf("%ld\n",max);
    }
    return 0;
}
