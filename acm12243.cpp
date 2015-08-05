#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char str[5000];
    while(gets(str)&&strcmp(str,"*"))
    {
        bool toto=true;
        char c= tolower(str[0]);
        for(int i=1;str[i]!='\0';i++)
        {
            if(str[i-1]==' '&&tolower(str[i])!=c)
                toto=false;
        }
        if(toto==true)
        printf("Y\n");
        else
        printf("N\n");
    }
    return 0;
}
