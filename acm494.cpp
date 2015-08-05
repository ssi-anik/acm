#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[10000];
    int i,l,count=0;
    while(gets(str))
    {
        count=0;
        l=strlen(str);
        for(i=0;i<l;i++)
        if(isalpha(str[i]) &&!isalpha(str[i+1]))
        count++;
        printf("%d\n",count);
    }

    return 0;
}
