#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int testCaseRunning=1,totalTestCase;
	scanf("%d",&totalTestCase);
	bool multidataSet = false;
	while (testCaseRunning++<=totalTestCase)
	{
		if(multidataSet == true)
			printf("\n");
		int n,i;
		scanf("%d\n",&n);
		map<string,int> myMap;
		for(i=1;i<=n;i++)
		{
			char c;
			string s;
			while((c=getchar())!='\n')
			{
				if(c=='-')
					continue;
				else if(c=='A'|| c=='B' || c=='C')
					s+="2";
				else if(c=='D' || c=='E' || c=='F')
					s+="3";
				else if(c=='G' || c=='H' || c=='I')
					s+="4";
				else if(c=='J' || c=='K' || c=='L')
					s+="5";
				else if(c=='M' || c=='N' || c=='O')
					s+="6";
				else if(c=='P' || c=='R' || c=='S')
					s+="7";
				else if(c=='T' || c=='U' || c=='V')
					s+="8";
				else if(c=='W' || c=='X' || c=='Y')
					s+="9";
				else if(c>='0' && c<='9')
					s+=c;
			}
			if(myMap.find(s)==myMap.end())
				myMap[s]=1;
			else
				myMap[s] = myMap[s] + 1;
		}
		map<string,int>::iterator it = myMap.begin();
		bool outputPrinted=false;
		while (it != myMap.end())
		{
			if(it->second >=2)
			{
				for(i=0;i<it->first.length();i++)
				{
					if(i==3)
						printf("-");
					printf("%c",it->first.at(i));
				}
				printf(" %d\n",it->second);
				outputPrinted = true;
			}
			++it;
		}
		if(outputPrinted==false)
			printf("No duplicates.\n");
		multidataSet = true;
	}
	return 0;
}
