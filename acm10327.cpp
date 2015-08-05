#include<stdio.h>

int main()
{
	long int i,j,k,n,len,swap,temp=0;

	while(scanf("%ld",&n)!=EOF)
	{
        int a[100000]={0};
        swap=0;

        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);

        for(i=n-1;i>0;i--)
            for(j=0;j<i;j++)
                if(a[j]> a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    swap++;
                }
        printf("Minimum exchange operations : %ld\n",swap);
    }

	return 0;
}

