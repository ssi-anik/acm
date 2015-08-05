#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[10001];
    while(gets(str))
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='"')
            {
                ++count;
                if(count&1)
                {
                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }
            else
            printf("%c",str[i]);
        }
        printf("\n");


    }
    return 0;
}
