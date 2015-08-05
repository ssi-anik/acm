#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cctype>
#include<ctype.h>

using namespace std;

int main()
{
	char c,holdFirstChar = '\0',prevChar='\0';
	int i=0;
	while ((c=getchar())!=EOF)
	{
		if(isalpha(c))
		{
			if((tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u')&&i==0)
				cout<<c;

			else if((tolower(c)!='a'||tolower(c)!='e'||tolower(c)!='i'||tolower(c)!='o'||tolower(c)!='u')&&i==0)
			{
				holdFirstChar = c;
			}
			else
				cout<<c;
			++i;
		}

		else
		{
			i=0;
			if(holdFirstChar!='\0')
			{
				cout<<holdFirstChar<<"ay"<<c;
			}
			else if(isalpha(prevChar))
				cout<<"ay"<<c;
			else
				cout<<c;
			holdFirstChar = '\0';
		}
		prevChar = c;
	}


    return 0;
}
