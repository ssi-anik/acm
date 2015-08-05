#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int testCaseRunning=1,
		totalTestCase;
	cin >> totalTestCase;
	getchar();
	while (testCaseRunning++ <=totalTestCase)
	{
		string s1,s2;
		cin>>s1 >> s2;
		int i=0;
		bool stillAbs = true;
		if(s1==s2)
		{
			stillAbs = true;
		}
		else if(s1.length()==s2.length())
		{
			while (i<s1.length() && stillAbs)
			{
				char c1 = s1.at(i);
				char c2 = s2.at(i);
				if((c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u') && ( c2== 'a' || c2=='e' || c2=='i' || c2=='o' || c2=='u'))
					stillAbs = true;
				else if(c1 != c2)
					stillAbs = false;
				++i;
			}
		}
		else
			stillAbs = false;

		if(stillAbs)
			cout << "Yes"<<endl;
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
