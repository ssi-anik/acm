#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long testCases,testCaseRunning=1,*a;
    a = (long*) malloc (30000 * sizeof(long));
    scanf("%ld",&testCases);
    while(testCaseRunning<=testCases)
    {
        long totalInput=0,temp=0,j;
        scanf("%ld",&totalInput);
        long i=0;
        for(i=0;i<totalInput;i++)
        scanf("%ld",&a[i]);
        for(i=totalInput-1;i>0;i--)
            for(j=0;j<i;j++)
                if(a[j]> a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        long median = ceil(totalInput/2);
        median = a[median];
        long optdiff=0;
        for(i=0;i<totalInput;i++)
        optdiff += fabs(median - a[i]);
        printf("%ld\n",optdiff);
        ++testCaseRunning;
    }
    return 0;
}
