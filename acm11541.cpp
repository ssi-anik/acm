#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{

    char str[300];
    int i,j,k,
        testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    getchar();
    while(testCaseRunning++<=totalTestCase)
    {
		printf("Case %d: ",testCaseRunning-1);
		gets(str);
        char c,pc=EOF;
        char num[100]={'\0'};
        i=0,j=0;
        while(j<=strlen(str))
        {
			if(j!=strlen(str))
				c=str[j];
            if(isdigit(c) && j<strlen(str))
            {
                num[i++]=c;
                num[i]='\0';
            }
			else if((isalpha(c)&&pc!=EOF) || j==strlen(str))
            {
                i = atoi(num);
                for(i;i>=1;i--)
                    printf("%c",pc);
                num[0] = '\0';
            }
            if(isalpha(c))
                pc = c;
			j++;
        }
        printf("\n");
    }
	return 0;
}
