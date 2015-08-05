#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<utility>
#include<cctype>
#include<cstdlib>
//#include<xstring>

using namespace std;


int main()
{
    string sentence;
	map<string , int> Country;
	int totalTestCases,testCaseRunning=1;
	cin>>totalTestCases;
	getchar();
	for( int k=0;k<2005;k++)
		Country.insert(pair<string,int>("",0));

	while (testCaseRunning<=totalTestCases)
	{
		getline(cin,sentence);
		string country = sentence.substr(0,sentence.find(" "));
		++Country[country];
		++testCaseRunning;
	}
	map<string,int>::iterator i = Country.begin();
	for(++i; i!=Country.end();++i)
			cout<<i->first<<" "<<i->second<<"\n";


    return 0;
}
