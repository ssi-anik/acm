#include<stdio.h>
#include<math.h>

int main()
{
    double hour,min;
    double diff;
    while(scanf("%lf:%lf",&hour,&min))
    {
        if(hour==0 && min==00)
        break;

        diff = fabs((60*hour) - (11*min));
        diff/=2;
        if(diff>180)
        diff = 360 - diff;
        printf("%.3lf\n",diff);
    }
    return 0;
}
