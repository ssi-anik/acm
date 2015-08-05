#include<stdio.h>

int main()
{
    double a,b,c,d,i;
    while(scanf("%lf",&a)==1)
    {
        if(a==0)
        break;
        b=0;
        c=1;
        for(i=0;i<a;i++)
        {
            d=b+c;
            b=c;
            c=d;
        }
        printf("%.0lf\n",d);
    }

    return 0;
}
