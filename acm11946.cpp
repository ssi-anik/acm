#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,j,k;
    int testCaseRunning=1,totalTestCase;
    scanf("%d\n",&totalTestCase);
    while(testCaseRunning++<=totalTestCase)
    {
        char line[105][90];
        int total=0;
        while(gets(line[total])&&strlen(line[total++]))
            ;
        for(j=0;j<total;j++)
        {
            for(int i=0;i<strlen(line[j]);i++)
            {
                if(isdigit(line[j][i]))
                {
                    if(line[j][i]=='0')
                    printf("O");
                    else if(line[j][i]=='1')
                    printf("I");
                    else if(line[j][i]=='2')
                    printf("Z");
                    else if(line[j][i]=='3')
                    printf("E");
                    else if(line[j][i]=='4')
                    printf("A");
                    else if(line[j][i]=='5')
                    printf("S");
                    else if(line[j][i]=='6')
                    printf("G");
                    else if(line[j][i]=='7')
                    printf("T");
                    else if(line[j][i]=='8')
                    printf("B");
                    else if(line[j][i]=='9')
                    printf("P");
                }
                else
                    printf("%c",line[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}
