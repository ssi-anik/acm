#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	char inputSting[1000];

	while (gets(inputSting))
	{
		char c;
		int i=0;
		for(i=0;i<strlen(inputSting);i++)
		{
			c=tolower(inputSting[i]);
			switch (c)
			{
			case 'b':
				cout<<'c';
				break;
			case 'c':
				cout<<'z';
				break;
			case 'd':
				cout<<'a';
				break;
			case 'e':
				cout<<'q';
				break;
			case 'f':
				cout<<'s';
				break;
			case 'g':
				cout<<'d';
				break;
			case 'h':
				cout<<'f';
				break;
			case 'i':
				cout<<'y';
				break;
			case 'j':
				cout<<'g';
				break;
			case 'k':
				cout<<'h';
				break;
			case 'l':
				cout<<'j';
				break;
			case 'm':
				cout<<'b';
				break;
			case 'n':
				cout<<'v';
				break;
			case 'o':
				cout<<'u';
				break;
			case 'p':
				cout<<'i';
				break;
			case 'r':
				cout<<'w';
				break;
			case 't':
				cout<<'e';
				break;
			case 'u':
				cout<<'t';
				break;
			case 'v':
				cout<<'x';
				break;
			case 'y':
				cout<<'r';
				break;
			case ',':
				cout<<'n';
				break;
			case '.':
				cout<<'m';
				break;
			case '/':
				cout<<',';
				break;
			case ';':
				cout<<'k';
				break;
			case '\'':
				cout<<'l';
				break;
			case '[':
				cout<<'o';
				break;
			case ']':
				cout<<'p';
				break;
			case '\\':
				cout<<'[';
				break;
			case '2':
				cout<<'`';
				break;
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				cout<<(inputSting[i] - '0')-2;
				break;
			case '0':
				cout<<'8';
				break;
			case '-':
				cout<<'9';
				break;
			case '=':
				cout<<'0';
				break;
			default:
				if(c!='a' && c!='s' && c!='q' && c!= 'w' && c!='z' && c!= 'x' && c!='`' && c!='1')
					cout<<inputSting[i];
				break;

			}
		}
		cout<<'\n';
	}
	return 0;
}
