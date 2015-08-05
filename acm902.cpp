#include<stdio.h>
#include<string>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<map>
#include<utility>
#include<iostream>
#include<ios>

using namespace std;

int main()
{
	map<string,int> mp;

	int N;
	while (scanf("%d ",&N)!=EOF)
	{
		string s,out;
		cin>>s;
		int i=0,len=s.length(),max=0;
		string sub;
		for(i=0;i<=len-N ; i++)
		{
			sub = s.substr(i,N);
			++mp[sub];
			if(max<mp[sub])
			{
				out=sub;
				max=mp[sub];
			}
		}
		cout<<out<<endl;
	}
	return 0;
}
