#include<stdio.h>
#include<string.h>
int main()
{
	unsigned long a;
	while (scanf("%lu",&a)!=EOF)
	{
		unsigned long i,p=0;
		for(i=1;i<=a;i+=2)
			p+=i;
		a = (p*2)-1;
		printf("%lu\n",a+(a-2)+(a-4));
	}
	return 0;
}