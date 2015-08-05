#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<map>
#include<stack>
#include<utility>

using namespace std;

int main()
{
	int testCaseRunning=1,totalTestCase;
	scanf("%d",&totalTestCase);
	map<char,char> mp;
	mp[')'] = '(';
	mp[']'] = '[';
	bool wrong=false;
	getchar();
	while (testCaseRunning++<=totalTestCase)
	{
		stack<char> st;
		wrong = false;
		char par[220],c;
		gets(par);
		int len = strlen(par);
		if(len==0)
			cout<<"Yes\n";
		else
		{
			for(int i=0;i<len;i++)
			{
				c = par[i];
				if(c=='(' || c==')' || c=='[' || c==']')
				{
					if(c=='(' || c=='[')
						st.push(c);
					else
					{
						if(st.empty()==true && (c==']' || c==')'))
						{
							wrong = true;
						}
						if(!wrong)
							if((st.top()=='(' && c==']') || (st.top()=='[' && c==')' ) )
								wrong = true;

						if(!wrong)
						{
							while (st.empty()!=true && st.top()!=mp[c])
							{
								st.pop();
							}
							if(!st.empty())
							st.pop();
						}
					}
					if(wrong)
						break;
				}
			}
			if(st.empty()==true && wrong == false)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}

	}

	return 0;
}
