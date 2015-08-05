#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MAX 110

void Division(char *first,int div, char *result)
{
    int len = strlen(first);
    int now=0;
    long extra;
    char RES[MAX];
    for(now = 0 , extra = 0; now<len; now++ )
    {
        extra = extra * 10 + (first[now] - '0');
        RES[now] = extra / div + '0';
        extra%=div;
    }
    RES[now] = '\0';
    for(now=0;RES[now]=='0'; now++ )
    strcpy(result,&RES[now]);
    if(strlen(result) == 0)
    {
        strcpy(result,"0");
    }

}
int main()
{
    int n;
    char mainNumber[MAX],result[MAX];
    while(scanf("%d %s",&n,mainNumber)!=EOF)
    {
        unsigned long long i;
        for(i=0;strcmp(result,"1")!=0;i++)
        {
            Division(mainNumber,n,result);
            strcpy(mainNumber,result);
        }
        printf("%llu\n",i);

    }
}
