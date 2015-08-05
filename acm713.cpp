#include<stdio.h>
#include<string.h>
#define MAX 410
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int testCaseRunning=1,totalTestCase;
	cin>>totalTestCase;
	getchar();
	while(testCaseRunning++<=totalTestCase)
    {
		char a[MAX],b[MAX],output[MAX];

		scanf("%s %s",a,b);
		int i=0;
		for(i=strlen(a)-1;a[i]=='0';i--)
			a[i]='\0';

		for(i=strlen(b)-1;b[i]=='0';i--)
			b[i]='\0';

		if(strlen(a)<strlen(b))
			swap(a,b);
		int sum=0,carry=0,j=0;
		for(i=0;i<strlen(a);i++)
		{
			if(i<strlen(b))
				sum = (a[i] - '0' ) + (b[i] - '0' ) + carry;
			else
				sum = (a[i] - '0' )  + carry;
			output[j++] = sum%10 + '0' ;
			carry = sum/10;
		}
		if(carry!=0)
			output[j++] = carry + '0' ;
		output[j]='\0';
		for(i=0;output[i]=='0';i++)
			;
		cout<<&output[i]<<endl;
    }
    return 0;

}
