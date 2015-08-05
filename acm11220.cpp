#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    long  testCaseRunning=1,totalTestCases;
    scanf("%ld\n\n",&totalTestCases);
    while(testCaseRunning<=totalTestCases)
    {
		printf("Case #%ld:\n",testCaseRunning);
        char message[500][1000];
		long total=0;
		while(gets(message[total]))
		{
			if(strlen(message[total])==0)
				break;
			++total;
		}
		for(long i=0;i<total;i++)
		{
			char hold[200];
			for(long j=0,x=0,nxt=0;j<strlen(message[i]);j++,x++)
			{
				hold[x] = message[i][j];
				if(hold[x]==' '||j==strlen(message[i])-1)
				{
					if(j==strlen(message[i])-1)
						++x;
					hold[x]='\0';
					if(strlen(hold)==0)
					{
						x=-1;
						continue;
					}
					if(strlen(hold)-1>=nxt)
						printf("%c",hold[nxt++]);
					x=-1;
				}
			}
			printf("\n");
		}
		if(testCaseRunning<totalTestCases)
			printf("\n");
        ++testCaseRunning;
    }
    return 0;
}
