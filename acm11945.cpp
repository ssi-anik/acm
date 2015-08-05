#include<stdio.h>
#include<math.h>

void printfComma (unsigned long n) {
    if (n < 0) {
        printf ("-");
        printfComma (-n);
        return;
    }
    if (n < 1000) {
        printf ("%d", n);
        return;
    }
    printfComma (n/1000);
    printf (",%03d", n%1000);
}

int main()
{
    double x=0,sum=0;
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning++<=totalTestCase)
    {
        int i;
        for(i=1;i<=12;i++)
        {
            scanf("%lf",&x);
            sum+=x;
        }
        sum = sum/12;
        printf("%d $",testCaseRunning-1);
        unsigned long intPart = (unsigned long) sum;
        double frac = sum - intPart;
		printfComma(intPart);
		char s[20];
        sprintf(s,"%.2lf",frac);
		printf("%s\n",&s[1]);

        sum = 0;
    }
    return 0;
}
