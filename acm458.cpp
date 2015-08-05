#include<stdio.h>
#include<string.h>
main()
{
    char deco[10000],coded[100000];
    while(scanf("%s",deco)!=EOF)
    {
        int i=0;
        while(deco[i]!='\0')
        {
            coded[i]=deco[i]-7;
            i++;
        }
        coded[i]='\0';
        for(i=0;coded[i]!='\0';i++)
        printf("%c",coded[i]);
        printf("\n");
    }
}
