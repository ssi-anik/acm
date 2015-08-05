#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int testCaseRunning=1,totalTestCase;
	scanf("%d\n",&totalTestCase);
	bool moreTestCases=false;
	while (testCaseRunning++<=totalTestCase)
	{
		if(moreTestCases==true)
			printf("\n");
		char s[30];
		map<string,long> myMap;
		while (gets(s) && !strlen(s))
		{
			;
		}
		string cppStr(s,strlen(s));
		long countSpecies=1;
		myMap[cppStr] = 1;
		while (gets(s) && s[0])
		{
			cppStr = s;
			if(myMap.find(cppStr)!=myMap.end())
			{
				myMap[cppStr] = myMap[cppStr]+1;
			}
			else
			{
				myMap[cppStr] = 1;
			}

			++countSpecies;

		}
		map<string,long>::iterator it = myMap.begin();

		while (it!=myMap.end())
		{
			double x = (double)(it->second*100)/(double)countSpecies;
			printf("%s %.4lf\n",it->first.c_str(),x);
			++it;
		}
		moreTestCases = true;
	}
	return 0;
}
