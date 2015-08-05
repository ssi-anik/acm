#include<stdio.h>
#include<math.h>
#define  pi 3.141592653589793
int main()
{
    double x1,x2,x3,y1,y2,y3;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        double a = sqrt(pow((x1-x2),2)+ pow((y1-y2),2));
        double b = sqrt(pow((x1-x3),2)+ pow((y1-y3),2));
        double c = sqrt(pow((x2-x3),2)+ pow((y2-y3),2));
        double s = (a+b+c)/2;
        double r = (a*b*c)/(4*sqrt((s*(s-a)*(s-b)*(s-c))));
        double cir = 2*pi*r;
        printf("%.2lf\n",cir);
    }
    return 0;
}
