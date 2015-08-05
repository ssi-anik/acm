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
    string word;
	char c;
	map<string , int> Dictionary;
    int i=0;
    while((c=getchar())!=EOF)
    {
        if(isalpha(c))
        {
			word.push_back(tolower(c));
			++i;
        }
        else
        {
            if(i!=0)
            ++Dictionary[word];
            i=0;
			word.clear();
        }
    }
	for(map<string , int>::iterator i = Dictionary.begin();i!=Dictionary.end();++i)
		cout<< i->first<<"\n";

    return 0;
}
