#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<stdio.h>


using namespace std;

int chkprec(char c)
{
	if(c=='*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else if(c== '(' || c==')')
		return 0;
}
int main()
{
	stack<char> st;
	int testCaseRunning=1,totalTestCase;

	scanf("%d\n\n",&totalTestCase);

	while(testCaseRunning<=totalTestCase)
	{
		char c,s[4];
		while (gets(s))
		{
			c=s[0];
			if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9')
				printf("%c",c);
			else if (c=='(')
			{
				st.push(c);
			}
			else if (c==')')
			{
				st.top();
				while (!st.empty())
				{
					if(st.top()!='(')
					printf("%c",st.top());
					if(st.top()=='(')
					{
						st.pop();
						break;
					}
					st.pop();

				}
			}

			else if(c=='+' || c=='-')
			{
				int prior1;
				if(st.empty()==true)
					prior1=0;
				else
					prior1 = chkprec(st.top());
				int prior2 = chkprec(c);
				if (prior1<prior2)
				{
					st.push(c);
				}
				else if (prior1>=prior2)
				{
					printf("%c",st.top());
					st.pop();
					if(st.empty()==true)
						st.push(c);
					else
					{
						prior1 = chkprec(st.top());
						prior2 = chkprec(c);
						if(prior1==prior2)
						{
							printf("%c",st.top());
							st.pop();
							st.push(c);
						}
						else if((c=='+' || c== '-' ) && st.top()=='(')
							st.push(c);

					}

				}
			}

			else if(c=='*' || c=='/')
			{
				int prior1;
				if(st.empty()==true)
					prior1=0;
				else
					prior1 = chkprec(st.top());

				int prior2 = chkprec(c);
				if (prior1<prior2)
				{
					st.push(c);
				}
				else if (prior1>=prior2)
				{
					printf("%c",st.top());
					st.pop();
					if(st.empty()==true)
						st.push(c);
					else
					{
						prior1 = chkprec(st.top());
						prior2 = chkprec(c);
						if(prior1==prior2)
						{
							printf("%c",st.top());
							st.pop();
							st.push(c);
						}

						else if (prior1<prior2)
						{
							st.push(c);
						}
					}

				}
			}
			if (strlen(s)==0)
			{
				break;
			}
		}

		while (!st.empty())
		{
			printf("%c",st.top());
			st.pop();
		}
		if(testCaseRunning!=totalTestCase)
		printf("\n");
        printf("\n");
		++testCaseRunning;

	}
	return 0;
}
