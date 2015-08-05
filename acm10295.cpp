#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int word,sentence;
	long money=0;
	scanf("%d %d\n",&word,&sentence);
	int i=0;
	char s[20];
	map<string,long> myMap;
	for(i=1;i<=word;i++)
	{
		scanf("%s %d\n",s,&money);
		string cppStr(s,strlen(s));
		myMap[cppStr] = money;
	}
	for(i=1;i<=sentence;i++)
	{
		money = 0;
		while (scanf("%s",s) && strcmp(s,".")!=0)
		{
			string cppStr(s,strlen(s));
			if(myMap.find(cppStr)!=myMap.end())
				money+=myMap[cppStr];
		}
		printf("%ld\n",money);
	}
	return 0;
}
