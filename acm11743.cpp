#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<map>
#include<utility>

using namespace std;

int main()
{
    map<int , int > mp;
    mp[0]=0;
    for(int i=1,j=1;i<=9;i++)
    {
        if(i<=4)
        mp[i]=2*i;
        else
        {
            mp[i]=j;
            j+=2;
        }
    }

	int totalTestCase,testCaseRunning=1;
	cin>>totalTestCase;
	while (testCaseRunning++<=totalTestCase)
	{
		char s1[5],
			s2[5],
			s3[5],
			s4[5];
		scanf("%s %s %s %s",s1,s2,s3,s4);
		int odd,even,i;
		odd=even=0;
		for(i=0;i<=3;i++)
		{
			if(i==0 || i==2)
			even += (mp[s1[i]-'0'] + mp[s2[i]-'0'] + mp[s3[i]-'0'] + mp[s4[i]-'0']) ;
			else
			odd += (s1[i]-'0' + s2[i]-'0' + s3[i]-'0' + s4[i]-'0');
		}
		int sum= odd+even;
		if(sum%10==0)
			cout<<"Valid\n";
		else
			cout<<"Invalid\n";
	}
	return 0 ;
}
