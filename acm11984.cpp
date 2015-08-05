#include<stdio.h>
#include<math.h>


int main()
{
    double f,c;
    int testCaseRunning=1,totalTestCases=0;
    scanf("%d",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
        scanf("%lf %lf",&c,&f);
        double fInC = (5.0f/9.0f)*((9.0f/5.0f)*c + f);

        printf("Case %d: %.2lf\n",testCaseRunning,fInC);

        ++testCaseRunning;
    }
	return 0;
}
