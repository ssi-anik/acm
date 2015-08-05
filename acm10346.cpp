#include<stdio.h>

int main()
{
	int n,k,total,butt;

	while(scanf("%d %d",&n,&k)==2)
	{
		total=0;butt=0;
		
		while(n>0)
		{
			total+=n;
			butt+=n;
			n=butt/k;
			butt%=k;
		}
		printf("%d\n",total);
	}
	
	return 0;
}