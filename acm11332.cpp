#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char *input;
	input = (char*) malloc ( 5010* sizeof(char) );
	while (gets(input))
	{
		if(strcmp(input,"0")==0)
			break;
		unsigned sum = 0 , i=0;
		for( i = 0; i<strlen(input) ; i++)
		{
			sum += input[i] - '0';
		}
		unsigned totalSum=0;
		while (sum>0)
		{
			totalSum+= sum%10;
			sum/=10;
			if(totalSum>9 && sum ==0)
			{
				sum = totalSum;
				totalSum = 0;
			}
		}
		cout<<totalSum<<'\n';

	}

}
