
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void divide_string(char *mainString,char *operand1, char *operand2,char *operators,char *result)
{
    int i=0,k=0;

    for(i=0;i<strlen(mainString);i++)
    {
        if(mainString[i]>=48 && mainString[i]<=57)
        {
            if(operators[0] == '+' || operators[0] == '-')
            {
                operand2[k] = mainString[i];
                operand2[++k]='\0';
            }
            else
            {
                operand1[k]= mainString[i];
                operand1[++k]='\0';
            }
        }
        else if(mainString[i] == '+' || mainString[i]== '-')
        {
			k=0;
            operators[k]=mainString[i];
			operators[++k]='\0';
            k=0;
        }
        else if(mainString[i] == '=')
        {
            for(++i,k=0;i<strlen(mainString);i++)
            {
                result[k]=mainString[i];
                result[++k]='\0';
            }
        }
    }
}

int main()
{
    char stringToBeTaken[5000], operand1[110],operand2[110],operators[30],resultFromFunction[50],resultFromMainFunction[50];
    int correctResult=0;
	while(scanf("%s",stringToBeTaken)!=EOF)
    {
        divide_string(stringToBeTaken,operand1, operand2,operators,resultFromFunction);
        int a = atoi(operand1);
        int b = atoi(operand2);
        int resultInInt=0;
        if(strcmp(operators,"+")==0)
        {
            resultInInt = a+b;
            sprintf(resultFromMainFunction,"%d",resultInInt);
            if( strcmp(resultFromMainFunction,resultFromFunction) == 0)
            ++correctResult;
        }
        else if(strcmp(operators , "-")==0)
        {
            resultInInt = a-b;
            sprintf(resultFromMainFunction,"%d",resultInInt);
            if(strcmp(resultFromMainFunction,resultFromFunction) == 0)
            ++correctResult;
        }
		operand1[0]='\0';
		operand2[0]='\0';
		resultFromFunction[0] = '\0';
		resultFromMainFunction[0] = '\0';
		operators[0] = '\0';

    }
    printf("%d\n",correctResult);
	return 0;
}
