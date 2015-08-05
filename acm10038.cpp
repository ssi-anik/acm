#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i=0;
        long int a[3010],check[3010]={0};
        for(i=1;i<=n;i++)
        scanf("%ld",&a[i]);
        int checked=0;
        for(i=1;i<n;i++)
        {
            int diff;
            if(a[i]>a[i+1])
            {
                diff= a[i] - a[i+1];
            }
            else
            diff = a[i+1] - a[i];

            check[diff]=1;
        }

        for(i=1;i<n;i++)
        {
            if(check[i]!=1)
            {
                checked = 1;
                break;
            }
        }
        if( checked == 0 )
        printf("Jolly\n");

        else
        printf("Not jolly\n");
    }
    return 0;
}
