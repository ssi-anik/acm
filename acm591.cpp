#include<stdio.h>
int main()
{
    int n,max,sum,a[120],i,testCase=0;
    while(scanf("%d",&n) && n!=0)
    {
        sum=max=i=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        max = sum/n;
        int count=0;
        for(i=0;i<n;i++)
        {
            if(a[i] - max > 0)
                count+= a[i] - max;
        }
        printf("Set #%d",++testCase);
        printf("\nThe minimum number of moves is %d.\n\n",count);
    }
    return 0;
}
