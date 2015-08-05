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


void call_mult(char *first,char *sec,char result[])
{
	int firstLenth = strlen(first);
	int secLenth = strlen(sec);
	int totalLength = firstLenth+secLenth;
	int total=0;
	int carry;
	char temp[MAX];
	for(int i=0;i<20;i++)
		temp[i] = '0';
	temp[20]='\0';
	for(int i=0;i<secLenth;i++)
	{
		carry = 0;
		total = i;
		for(int j=0;j<firstLenth;j++)
		{
			++total;
			if (temp[i+j]=='\0')
			{
				temp[i+j] = '0';
				temp[i+j+1] = '\0';
			}
			int multi = (first[j]-'0')*(sec[i]-'0')+carry+(temp[i+j]-'0');
			int mod = multi % 10;
			temp[j+i]= mod+'0';
			carry = multi / 10;
		}


		if (carry!=0)
		{
			temp[total++] = carry+'0';
		}

		temp[total] = '\0';
	}
	strcpy(result,temp);
}

struct factorial
{
	int num;
	char fValue[MAX];
	factorial *next;
}*head,*tptr,*nptr;

int main()
{
    freopen("D:\\acmin.txt","r",stdin);
    int i,j,k;
	char finalResult[MAX],Result[MAX],intToString[100],intToStringFinal[100];
	for(i=0;i<=1000;i++)
	{
		nptr = new(factorial);
		if(i==0)
		{
			nptr->num=i;
			strcpy(nptr->fValue,"1");
			nptr->next=NULL;
			head=NULL;
			head=tptr=nptr;
		}
		else if (i==1)
		{
			nptr->num = i;
			strcpy(nptr->fValue,"1");
			nptr->next=NULL;
			tptr->next=nptr;
			tptr = nptr;
		}
		else if(i==2)
		{
			nptr->num = i;
			strcpy(nptr->fValue,"2");
			nptr->next=NULL;
			tptr->next=nptr;
			tptr = nptr;
		}
		else if (i==3)
		{

			nptr->num = i;
			strcpy(nptr->fValue,"6");
			nptr->next =NULL;
			tptr->next=nptr;
			tptr = nptr;
		}
		else if (i==4)
		{
			nptr->num = i;
			nptr->next = NULL;
			strcpy(nptr->fValue,"42");
			tptr->next = nptr;
			tptr = nptr;
		}
		else
		{
			if(i==5)
				strcpy(finalResult,"42");
			sprintf(intToString,"%d",i);
			reversestr(intToString,intToStringFinal);
			call_mult(finalResult,intToStringFinal,Result);
			strcpy(nptr->fValue,Result);
			nptr->num=i;
			nptr->next=NULL;
			tptr->next=nptr;
			tptr=nptr;
			strcpy(finalResult,Result);
		}
	}
	while (scanf("%d",&i)!=EOF)
	{
		for(tptr=head;tptr->num!=i;tptr=tptr->next)
			;
		reversestr(tptr->fValue,Result);
		unsigned long long sum=0;
		for(i=0;Result[i]!='\0';i++)
		{
		    sum+=Result[i]-'0';
		}
		printf("%llu\n",sum);
	}

    return 0;
}
