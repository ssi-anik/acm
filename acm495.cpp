#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 3000

void reversestr(char *from , char *to)
{
    int i=0,j=0;
    for(i=0,j=strlen(from)-1;i<strlen(from);i++,j--)
    {
        to[j]=from[i];
    }
    to[strlen(from)]='\0';
}

void call_addition(char *first,char *sec, char *result)
{
	//memset(result,0,sizeof(char));
	int i=0;
	int flen = strlen(first);
	int slen = strlen(sec);
	int carry=0,sum=0;
	for(i=0;i<flen && i<slen;i++)
	{
		sum= (first[i] - '0') + (sec[i] - '0') +carry;
		result[i] = sum%10 + '0' ;
		carry=sum/10;
	}
	for(;i<flen;i++)
	{
		sum = (first[i] - '0') + carry ;
		result[i] = sum%10 + '0';
		carry/=10;
	}
	for(;i<slen;i++)
	{
		sum = (sec[i] - '0' ) + carry ;
		result[i] = sum%10 + '0';
		carry/=10;
	}
	if(carry!=0)
		result[i++]= carry + '0';
	result[i] = '\0';
}
struct fabSeries
{
    int value;
    char fabValue[MAX];
    fabSeries *next;
};
int main()
{
    fabSeries *head,*nptr,*tptr;
	head=NULL;
	char f0[MAX],f1[MAX], Result[MAX];
	int i=0;
	nptr = new(fabSeries);
	strcpy(nptr->fabValue,"0");
	nptr->value = 0;
	nptr->next = NULL;
	head=tptr=nptr;
	nptr=new(fabSeries);
	strcpy(nptr->fabValue,"1");
	nptr->value=1;
	nptr->next=NULL;
	tptr->next=nptr;
	tptr=nptr;
	strcpy(f0,head->fabValue);
	strcpy(f1,nptr->fabValue);
	for(i=2;i<=5000;i++)
	{
		nptr = new(fabSeries);
		nptr->value = i;
		Result[0]='\0';
		call_addition(f0,f1,Result);
		strcpy(nptr->fabValue,Result);
		nptr->next=NULL;
		tptr->next=nptr;
		tptr=nptr;
		strcpy(f0,f1);
		strcpy(f1,Result);


	}
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for(tptr=head;tptr->value!=n;tptr= tptr->next)
			;
		reversestr(tptr->fabValue,Result);
		if(n==0)
		{
			printf("The Fibonacci number for 0 is 0\n");
			continue;
		}
		for(i=0;Result[i]=='0';i++)
			;
		printf("The Fibonacci number for %d is %s\n",n,&Result[i]);
	}

	return 0;
}
