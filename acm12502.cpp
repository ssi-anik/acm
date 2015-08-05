#include<stdio.h>

int main()
{
    float a,b,w,c,e,d,A,i,result;
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f %f %f",&a,&b,&w);
        c=a-b;
        d=c/b;
        e=b*d;
        A=a+e;
        result=(w/(a+b))*A;
        printf("%d\n",(int)result);

    }
    return 0;
}
