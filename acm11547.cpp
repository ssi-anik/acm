#include<stdio.h>
int main()
{
	int n,m,o,i;
	long int p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		p=(((((m*567)/9)+7492)*235)/47)-498;
		q=p/10;
		o=q%10;
		if(o<0)
		o=o*(-1);
		printf("%d\n",o);
	}
return 0;
}
