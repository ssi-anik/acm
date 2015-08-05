#include<stdio.h>
#include<math.h>

int main()
{
    double u,v,w;

    while(scanf("%lf",&u)!=EOF)
    {
        scanf("%lf %lf",&v,&w);
        if((u+v >w)  && (u+w >v) && (v+w >u))
        {
            double s = (u+v+w)/2;
            s = s*(s-u)*(s-v)*(s-w);
            double area = (4.0/3.0);
            area *= sqrt(s);
            printf("%.3lf\n",area);
            continue;
        }
        else
        printf("-1.000\n");
    }
    return 0;
}
