#include<stdio.h>
#include<math.h>
#define pi 3.1415926535897932384626433832795
int main()
{
    double r,n;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
		double sinValue = sin(2.0*pi/n);
		double triangle = (.5 * pow(r,2) * sinValue);
        triangle *= n;
        printf("%.3lf",triangle);
		printf("\n");
    }
    return 0;
}
