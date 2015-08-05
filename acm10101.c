#include<stdio.h>
#include<string.h>

void recursive(unsigned long n,int term,char output[])
{
	char temp[100]="";
	if(term>5)
		return ;
	if(term==1)
	{
		if(n%100!=0)
		{
			sprintf(temp,"%d",n%100);
			strcpy(output,temp);
			n = n/100;
		}
		else
		{
			n = n/100;
		}
	}
	else if(term==2)
	{
		if(n%10!=0)
		{
			sprintf(temp,"%d",n%10);
			strcat(temp," shata ");
			strcat(temp,output);
			strcpy(output,temp);
			n = n/10;
		}
		else
		{
			n = n/10;
		}
	}
	else if(term==3)
	{
		if(n%100!=0)
		{
			sprintf(temp,"%d",n%100);
			strcat(temp," hajar ");
			strcat(temp,output);
			strcpy(output,temp);
			n = n/100;
		}
		else
		{
			n = n/100;
		}
	}
	else if(term==4)
	{
		if(n%100!=0)
		{
			sprintf(temp,"%d",n%100);
			strcat(temp," lakh ");
			strcat(temp,output);
			strcpy(output,temp);
			n = n/100;
		}
		else
		{
			n = n/100;
		}
	}
	else if(term==5)
	{
		if(n%100!=0)
		{
			sprintf(temp,"%d",n%100);
			strcat(temp," kuti ");
			strcat(temp,output);
			strcpy(output,temp);
			n = n/100;
		}
		else
		{
			n = n/100;
		}
	}
	recursive(n,++term,output);
}

int main ()
{
	char input[20];
	int testCaseRunning=1;
	while (gets(input))
	{
		printf("%4d. ",testCaseRunning++);
		char temp[100]="", output[100]="";
		unsigned long n = 0 ;
		int term = 1;
		if(strlen(input)>=9)
		{
			sprintf(temp,"%s",&input[strlen(input)-9]);
			input[strlen(input)-9] = '\0';
			sscanf(temp,"%lu",&n);
			recursive(n,term,output);
			term=2;
			if(strstr(output,"kuti")==NULL && strlen(output)!=0)
			{
				sprintf(temp,"kuti %s",output);
				strcpy(output,temp);
			}
		}
		sscanf(input,"%lu",&n);
		recursive(n,term,output);
		if(strcmp(output,"")==0)
			printf("0\n");
		else
			printf("%s\n",output);

	}
    return 0;
}
