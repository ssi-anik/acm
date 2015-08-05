#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	string name,younger,older;
	int date,month,year,youngerDate,youngerMonth,youngerYear,olderDate,olderMonth,olderYear,testCaseRunnning=1,totalTestCase;
	youngerDate=youngerMonth=youngerYear=olderDate=olderMonth=olderYear=0;
	cin>> totalTestCase;
	getchar();
	bool first = true;
	while (testCaseRunnning++<=totalTestCase)
	{
		cin >> name >> date >> month >> year ;
		getchar();
		if(youngerYear<year)
		{
			younger = name;
			youngerDate = date ;
			youngerMonth = month;
			youngerYear = year;
			if(first)
			{
				olderYear=year;
				first=false;
			}

			continue;
		}
		else if(youngerYear == year)
		{
			if(youngerMonth<month)
			{
				younger = name;
				youngerDate = date ;
				youngerMonth = month;
				youngerYear = year;
				continue;
			}
			else if(youngerMonth == month)
			{
				if(youngerDate<date)
				{
					younger = name;
					youngerDate = date ;
					youngerMonth = month;
					youngerYear = year;
					continue;
				}
			}
		}

		if(olderYear>year)
		{
			older = name;
			olderDate = date ;
			olderMonth = month;
			olderYear = year;
			continue;
		}
		else if(olderYear == year)
		{
			if(olderMonth>month)
			{
				older = name;
				olderDate = date ;
				olderMonth = month;
				olderYear = year;
				continue;
			}
			else if(olderMonth == month)
			{
				if(olderDate>date)
				{
					older = name;
					olderDate = date ;
					olderMonth = month;
					olderYear = year;
					continue;
				}
			}
		}


	}
	cout<<younger<<endl<<older<<endl;
	return 0;
}
