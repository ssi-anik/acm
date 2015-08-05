#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
#include<utility>

using namespace std;

int main()
{
    int i=0,
        testCaseRunning=1,
        totalTestCase;
    cin>>totalTestCase;
    while(testCaseRunning++<=totalTestCase)
    {
		i=0;
        map<int,string> mp;
		int moving=2,totalMove;
		cin>> totalMove;
		getchar();
		string firstMove;
		cin>> firstMove;
		mp[1]=firstMove;
		int robotMoved=0,j=2;
		if(firstMove=="RIGHT")
			robotMoved+=1;
		else
			robotMoved-=1;

		while (moving++<=totalMove)
		{
			cin>> firstMove;
			if(firstMove=="RIGHT" || firstMove=="LEFT")
			{
				mp[j++]  = firstMove;
				if(firstMove=="RIGHT")
					robotMoved+=1;
				else
					robotMoved-=1;
			}
			else
			{
				char s[3] ;
				scanf("%s %d",s,&i);
				if(mp[i]=="LEFT")
					robotMoved -= 1;
				else
					robotMoved += 1;
				mp[j++] = mp[i];
			}
		}
		cout<< robotMoved <<endl;
    }
    return 0;
}
