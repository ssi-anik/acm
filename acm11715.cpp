#include<stdio.h>
#include<math.h>

int main()
{
    double u,v,a,s,t;
    int choice,testCaseRunning=1,totalTestCases;
    while(scanf("%d",&choice)&&choice)
    {
        printf("Case %d: ",testCaseRunning++);
        switch(choice)
        {
            case 1:
                scanf("%lf %lf %lf",&u,&v,&t);
                s = ((u+v)*t)/2;
                a = (v - u) / t;
                printf("%.3lf %.3lf",s,a);
                break;
			case 2:
                scanf("%lf %lf %lf",&u,&v,&a);
                t = ( v - u ) / a;
                s = (( u + v )*t)/2;
                printf("%.3lf %.3lf",s,t);
                break;

            case 3:
                scanf("%lf %lf %lf",&u,&a,&s);
                v = pow(u,2)+(2*a*s);
				v = sqrt(v);
                t = (2*s)/(u+v);
                printf("%.3lf %.3lf",v,t);
                break;
            case 4:
                scanf("%lf %lf %lf",&v,&a,&s);
                u = pow(v,2) - (2*a*s);
				u = sqrt(u);
                t = (2*s)/(u+v);
                printf("%.3lf %.3lf",u,t);
                break;
        }
        printf("\n");
    }
    return 0;
}
