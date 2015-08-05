#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        double x =0;
		x = (s-a)*(s-b)*(s-c);
		if(s==0)
			x=0;
		else
			x= x / s;

		x=sqrt(x);

        printf("The radius of the round table is: %.3lf\n",x);
    }
    return 0;
}
