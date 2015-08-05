#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<utility>
#include<cctype>
#include<cstdlib>

using namespace std;


int main()
{
    string sentence;
	map<string , string> Dictionary;
    int i=0;
    while(getline(cin,sentence))
    {
		if(sentence.empty())
			break;

		string english = sentence.substr(0,sentence.find(" "));
		string foreign = sentence.substr(sentence.find(" ")+1,sentence.length()-1);
		Dictionary[foreign] = english;
    }
	string findWord;
	while (cin>>findWord)
	{
		map<string,string>::iterator i = Dictionary.find(findWord);
		if(i==Dictionary.end())
			cout<<"eh\n";
		else
			cout<<Dictionary[findWord]<<"\n";
	}

    return 0;
}
