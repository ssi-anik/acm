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

void call_divide(char *number,unsigned long long div,char *result)
{
	int len = strlen(number);
	int now ;
	unsigned long long extra;
	char Res[MAX];
	for(now=0,extra=0;now<len;now++)
	{
		extra = extra*10+(number[now] - '0');
		Res[now] = extra/div + '0';

		extra%=div;
	}
	Res[now]='\0';
	for(now=0;Res[now]=='0';now++)
		;
	*result=Res[now];
}
struct factorial
{
	int num;
	char fValue[MAX];
	factorial *next;
}*head,*tptr,*nptr;

int main()
{
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
	double N,M;
	while (scanf("%lf %lf",&N,&M)!=EOF)
	{
		if(N==0 && M==0)
			break;
		char ResultForN[MAX],ResultForM[MAX],ResultForNminusM[MAX];
		ResultForM[0]=ResultForN[0]=ResultForNminusM[0]='\0';
		for(tptr=head,i=0;tptr->num<=N+1;tptr=tptr->next,++i)
		{
			if(tptr->num == N)
				strcpy(ResultForN,tptr->fValue);
			if(tptr->num == M)
				strcpy(ResultForM,tptr->fValue);
			if(tptr->num == N-M)
				strcpy(ResultForNminusM,tptr->fValue);
		}
		strcpy(Result,ResultForN);
		reversestr(Result,ResultForN);
		double factOfN = atof(ResultForN);
		strcpy(Result,ResultForM);
		reversestr(Result,ResultForM);
		double factOfM = atof(ResultForM);
		strcpy(Result,ResultForNminusM);
		reversestr(Result,ResultForNminusM);
		double factOfN_M = atof(ResultForNminusM);
		long double lower = factOfN_M*factOfM;
		long double C = (long double) factOfN /( (long double) lower);
		printf("%.0lf things taken %.0lf at a time is %.0llf exactly.\n",N,M,C);
	}

    return 0;
}
