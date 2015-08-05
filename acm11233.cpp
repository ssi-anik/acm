#include <stdio.h>
#include<malloc.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<utility>
#include<string>


using namespace std;

int main()
{
    string s;
	int dict,input=1,
		words;
	cin>>dict>>words;
	getchar();
	map<string,string> dictionary;
	while (input++<=dict)
	{
		string singu,plu;
		cin>>singu>>plu;
		dictionary[singu] = plu;

	}
	input=1;
	while (input++<=words)
	{
		string word;
		cin>>word;
		map<string,string>::iterator i = dictionary.find(word);
		if(i!=dictionary.end())
			cout<<i->second<<endl;
		else
		{
			char c = word[word.length()-1];
			if(c=='y')
			{
				char ch=word[word.length()-2];
				if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
					word+="s";
				else
				{
					word = word.substr(0,word.length()-1);
					word+="ies";
				}

			}
			else if (c=='o' || c=='s' || c=='x')
			{
				word+="es";
			}
			else if (c=='h')
			{
				char ch = word[word.length()-2];
				if(ch=='c' || ch=='s')
					word+="es";
			}
			else
				word+="s";

			cout<<word<<endl;
		}
		word.clear();
	}
	return 0;
}
