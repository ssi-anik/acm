#include<stdio.h>

int main()
{
    int testCaseRunning=1,totalTestCases;
    scanf("%d",&totalTestCases);
    printf("Lumberjacks:\n");
    while(testCaseRunning<=totalTestCases)
    {
        int i=0,ordered=0,unordered=0;
        int arr[15]={0};
        scanf("%d %d",&arr[0],&arr[1]);
        if(arr[0]<arr[1])
        {
            for(i=2;i<10;i++)
            {
                scanf("%d",&arr[i]);
                if(arr[i-1]>arr[i])
                    unordered=1;
            }
        }
        else if(arr[0]>arr[1])
        {
            for(i=2;i<10;i++)
            {
                scanf("%d",&arr[i]);
                if(arr[i-1]<arr[i])
                    ordered=1;
            }
        }
        if((unordered==1 && ordered==0) || (unordered==0 && ordered==1))
            printf("Unordered\n");
        else if(ordered==0&&unordered==0)
            printf("Ordered\n");
        ++testCaseRunning;
    }
    return 0;
}
