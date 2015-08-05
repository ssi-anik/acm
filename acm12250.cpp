#include<stdio.h>
#include<string.h>

int main()
{
    char language[30];
    unsigned long testCase=1;
    while(scanf("%s",language)&&strcmp(language,"#"))
    {
        printf("Case %lu: ",testCase++);
        if(strcmp(language,"HELLO")==0)
            printf("ENGLISH\n");

        else if(strcmp(language,"HOLA")==0)
            printf("SPANISH\n");

        else if(strcmp(language,"HALLO")==0)
            printf("GERMAN\n");

        else if(strcmp(language,"BONJOUR")==0)
            printf("FRENCH\n");

        else if(strcmp(language,"CIAO")==0)
            printf("ITALIAN\n");

        else if(strcmp(language,"ZDRAVSTVUJTE")==0)
            printf("RUSSIAN\n");

        else
            printf("UNKNOWN\n");

    }
    return 0;
}
