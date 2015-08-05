#include<math.h>
#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<map>
#include<utility>
#include<stdlib.h>
#include<ctype.h>
#include<algorithm>

using namespace std;

int main()
{

	int testCaSeRunning=1,totalTestCase;
	cin>>totalTestCase;
	getchar();
	while (testCaSeRunning++<=totalTestCase)
	{
		char A[5],operation,B[5];
		int i=0;
		scanf("%s %c %s",A,&operation,B);

		map<char,char*> mapForBinary;
		mapForBinary['0']="0000";
		mapForBinary['1']="0001";
		mapForBinary['2']="0010";
		mapForBinary['3']="0011";
		mapForBinary['4']="0100";
		mapForBinary['5']="0101";
		mapForBinary['6']="0110";
		mapForBinary['7']="0111";
		mapForBinary['8']="1000";
		mapForBinary['9']="1001";
		mapForBinary['A']="1010";
		mapForBinary['B']="1011";
		mapForBinary['C']="1100";
		mapForBinary['D']="1101";
		mapForBinary['E']="1110";
		mapForBinary['F']="1111";
		map<char,int> mapForDecimal;
		mapForDecimal['1']=1;
		mapForDecimal['2']=2;
		mapForDecimal['3']=3;
		mapForDecimal['4']=4;
		mapForDecimal['5']=5;
		mapForDecimal['6']=6;
		mapForDecimal['7']=7;
		mapForDecimal['8']=8;
		mapForDecimal['9']=9;
		mapForDecimal['0']=0;
		mapForDecimal['A']=10;
		mapForDecimal['B']=11;
		mapForDecimal['C']=12;
		mapForDecimal['D']=13;
		mapForDecimal['E']=14;
		mapForDecimal['F']=15;
		char first[16],second[16],result[20];
		memset(first,'\0',sizeof(char)*16);
		memset(second,'\0',sizeof(char)*16);
		if(strlen(A)==1)
			memset(first,'0',sizeof(char)*9);
		else if(strlen(A)==2)
			memset(first,'0',sizeof(char)*5);
		else
			memset(first,'0',sizeof(char)*1);

		if(strlen(B)==1)
			memset(second,'0',sizeof(char)*9);
		else if(strlen(B)==2)
			memset(second,'0',sizeof(char)*5);
		else
			memset(second,'0',sizeof(char)*1);
		int intFirst,intSecond;
		intFirst=intSecond=0;
		for(i=0;i<strlen(A);i++)
		{
			strcat(first, mapForBinary[A[i]] );
			intFirst += (mapForDecimal[A[i]])*(pow(16,strlen(A)-i-1)) ;
		}


		for(i=0;i<strlen(B);i++)
		{
			strcat(second,mapForBinary[B[i]]);
			intSecond += (mapForDecimal[B[i]])*(pow(16,strlen(B)-i-1)) ;
		}

		if(strcmp(first,second)<0 && operation=='-')
		{
			swap(first,second);
			swap(intFirst,intSecond);
		}


		printf("%s %c %s = ",first,operation,second);
		if(operation=='-')
			printf("%d",(intFirst-intSecond));
		else
			printf("%d",(intFirst+intSecond));
		printf("\n");

	}


    return 0;

}
