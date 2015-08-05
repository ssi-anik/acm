#include<stdio.h>
#include<iostream>
#include<utility>
#include<map>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	map<string,string> bDate;
	bDate.clear();
	int testCaseRunning=1,totalTestCase;
	cin>> totalTestCase;
	getchar();
	while (testCaseRunning++<=totalTestCase)
	{
		string name,date,year,month;
		cin>> name >> date >> month >> year;
		if(date.length()<2)
			date = "0"+date;
		if(month.length()<2)
			month = "0"+month;
		bDate[year+month+date] = name;
	}
	map<string,string>::iterator  b = bDate.begin();
	map<string,string>::reverse_iterator  e = bDate.rbegin();
	cout<<e->second<<endl<<b->second<<endl;

	return 0;
}
