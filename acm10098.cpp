#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
    char s[11];
	int testCaseRunning=1,totalTestCase;
	scanf("%d",&totalTestCase);
	while (testCaseRunning++<=totalTestCase)
	{
		scanf("%s",s);
		sort(s,s+strlen(s));
		do
		{
			printf("%s\n",s);
		}while (next_permutation(s,s+strlen(s)));
		printf("\n");
	}

	return 0;
}
