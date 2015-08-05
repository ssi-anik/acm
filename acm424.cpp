#include<iostream>
#include<math.h>
#include<string>
#include<string.h>

#define MAX 1000
using namespace std;

void reverseStirng(char *mainString, char *result)
{
	int k=0;
	int i = 0;
	for (i = strlen(mainString) -1 , k=0; i >=0  ; i-- , ++k)
	{
		result[k] = mainString[i];
	}
	result[k] = '\0';
}

void addition(char *inputString , char *previousResult , char *result)
{
	int i=0,sum=0,extra=0;
	if(strcmp(previousResult,"")==0)
		strcpy(previousResult,inputString);
	else
	for (i = 0,extra =0; i < strlen(inputString) && strlen(previousResult); i++)
	{
		sum = (inputString[i] - '0' ) + (previousResult[i] - '0') +extra;
		previousResult[i] = sum%10 + '0' ;
		extra = sum/10;
	}
	for( sum=0 ; i<strlen(inputString);i++)
	{
		sum = inputString[i] - '0' +extra;
		previousResult[i] = sum%10 + '0';
		extra = sum/ 10;
	}

	for( sum=0; i<strlen(previousResult) ; i++)
	{
		sum = previousResult[i] - '0' +extra ;
		previousResult[i] = sum%10 + '0';
		extra = sum/10;

	}

	if(extra!=0)
		previousResult[i++] = extra + '0';
	previousResult[i] = '\0';
	if(strcmp(inputString,"0")==0)
		reverseStirng(previousResult,result);
}


int main()
{
	char input[3000], result[3000],previousResult[5000] ;
	int flag=0;
	previousResult[0] = '\0';
	while (cin>>input && ++flag)
	{
		if(flag)
		{
			reverseStirng(input,result);
			strcpy(input,result);
			result[0] = '\0';
		}
		addition(input,previousResult,result);
		if(strcmp(input,"0")==0)
			break;
	}
	cout<<result<<"\n";
	return 0;
}
