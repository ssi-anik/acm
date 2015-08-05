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


int main()
{
    int getValueToFactorial=0;
    while(scanf("%d",&getValueToFactorial)&&getValueToFactorial!=0)
    {
		char finalResult[MAX],Result[MAX];
        if(getValueToFactorial==1)
        strcpy(Result,"1");
        else if(getValueToFactorial == 2)
        strcpy(Result,"2");
        else if(getValueToFactorial == 3 )
        strcpy(Result,"6");
        else if(getValueToFactorial == 4)
        strcpy(Result,"24");
        else
        {
            strcpy(finalResult,"42");
            char intToStr[200],intToStrFinal[200];
            for(int i=5;i<=getValueToFactorial;i++)
            {
                sprintf(intToStr,"%d",i);
                reversestr(intToStr,intToStrFinal);
				call_mult(finalResult,intToStrFinal,Result);
				strcpy(finalResult,Result);
            }

        }
		int count0To9[10]={0};
		for(int i=0;i<strlen(Result);i++)
		{
			int x = Result[i] - '0' ;
			++count0To9[x];
		}


		printf("%d! --\n",getValueToFactorial);
		for(int i=0;i<10;i++)
		{
			printf("   (%d)%5d",i,count0To9[i]);

			if(i==4||i==9)
				printf("\n");
		}
	}
    return 0;
}
