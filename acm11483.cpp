#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
    int testCaseRunning=1,howMany;
	while ((cin>>howMany)&&howMany)
	{
		cout<<"Case "<<testCaseRunning++<<":"<<endl;
		char inp[101][200];
		int i=0,k=0;
		while (gets(inp[i]) && strlen(inp[i])==0)
			;
		while (++i<howMany)
			gets(inp[i]);

		printf("%s\n%s\n%s\n%s\n","#include<string.h>","#include<stdio.h>","int main()","{");

		for(k=0;k<i;k++)
		{
			cout<<"printf(\"";
			for(int len=0;len<strlen(inp[k]);len++)
			{
				char c=inp[k][len];
				if(c=='\\')
					cout<<"\\\\";
				else if(c=='\"')
					cout<<"\\\"";
				else
					cout<<c;
				if(len+1==strlen(inp[k]))
					cout<<"\\n\"";

			}
			cout<<");"<<endl;
		}

		printf("%s\n%s\n%s","printf(\"\\n\");","return 0;","}\n");

	}
    return 0;
}
