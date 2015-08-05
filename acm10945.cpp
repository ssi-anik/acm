#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseStr(char *from,char* to)
{
    int i,j;
    for(i=strlen(from)-1,j=0;i>=0;i--,j++)
        to[j]=from[i];
    to[j]='\0';
}

int main()
{
    char str[200],get[200],set[200];
    while(gets(str) && strcmp(str,"DONE"))
    {
        int i=0,j;
        for(i=0,j=0;str[i]!='\0';i++)
            if(isalpha(str[i]))
                set[j++]=tolower(str[i]);
        set[j] = '\0';

        reverseStr(set,get);
        if(strcmp(set,get)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
