#include<stdio.h>
#include<math.h>

int main()
{
	int n,test=1;
	while (scanf("%d",&n) && n)
	{
		int output[6]={0};
		int i=0,j,x;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&x);
				if(i==1 || i==n)
					output[1] += x;
				else if(i>=2 && (j==1 || j==n))
					output[1] += x;
				else if((i==2 || i==n-1) && (j>=2 && j<=n-1))
					output[2] += x;
				else if(i>=3 &&(j==2 || j==n-1))
					output[2] += x;
				else if((i==3 || i==n-2) && (j>=3 && j<=n-2))
					output[3] += x;
				else if(i>=3 && ( j==3 || j==n-2))
					output[3] += x;
				else if((i==4 || i== n-3) && (j>=4 && j<=n-3))
					output[4] += x;
				else if(i>=4 && (j==4 || j==n-3 ))
					output[4] += x;
				else if(n>5 && i>=5  && (j>=5 && j<=n-4))
					output[5] += x;
			}
		}
		printf("Case %d: ",test++);
		for(i=1;i<=(int)ceil((double)n/2);i++)
		{
			if(i>=2)
				printf(" ");
			printf("%d",output[i]);
		}
		printf("\n");
	}
	return 0;
}
