#include<stdio.h>

int main()
{
	long int i,j,k,n,len,swap,temp=0;

	while(scanf("%ld",&n)==1)
	{

		for(k=0;k<n;k++)
		{
		int a[100000]={0};
		swap=0;

		scanf("%ld",&len);
		for(i=0;i<len;i++)
			scanf("%ld",&a[i]);

		for(i=len-1;i>0;i--)
			for(j=0;j<i;j++)
				if(a[j]> a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						swap++;
					}
		printf("Optimal train swapping takes %ld swaps.\n",swap);
		}
	}
	return 0;
}
