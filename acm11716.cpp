#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main()
{
    char *str;
    str = (char*)malloc(10001*sizeof(char));
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    getchar();
    while(testCaseRunning++<=totalTestCase)
    {
        gets(str);
        double x = sqrt(strlen(str));
        int n = (int)x;
        if(x - n > 0)
        {
            printf("INVALID\n");
            continue;
        }
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i;j<strlen(str);j+=n)
            {
                printf("%c",toupper(str[j]));
            }
        }
        printf("\n");
    }
    return 0;
}
