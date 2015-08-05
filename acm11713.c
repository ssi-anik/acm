#include<stdio.h>
#include<string.h>

int main()
{
	int testCaseRunning=1,
		totalTestCase;
	scanf("%d",&totalTestCase);
	getchar();
	while (testCaseRunning++ <=totalTestCase)
	{
		char s1[22],c,stillAbs='y';
		scanf("%s\n",s1);
		int i=0, s1len = strlen(s1);
		while((c=getchar())!='\n')
		{
			if(stillAbs =='y')
			{
				if((c=='a' || c=='e' || c=='i' || c=='o' || c=='u') && (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u') )
					stillAbs = 'y';
				else if(c!=s1[i])
					stillAbs = 'n';
				++i;
			}
		}

		if(i!=s1len)
			stillAbs='n';
		if (stillAbs == 'y' )
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}

	}
	return 0;
}
