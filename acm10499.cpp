#include<stdio.h>
int main()
{
    double gm;
    while(scanf("%lf",&gm)&&gm>0)
    {
        long double mv=gm*25;
		if(gm!=1)
        printf("%.0llf%c\n",mv,37);
		else
		{
			printf("0%c\n",37);
		}
    }
    return 0;
}
