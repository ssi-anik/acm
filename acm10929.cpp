#include<stdio.h>
#include<string.h>
main()
{
    int x,i;
    char s[1001];
    while(scanf("%s",s) && !strcmp(s,"0")==0 )
    {
        int sum=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(i%2==0)
            sum+=s[i]-'0';
            else
            sum-=s[i]-'0';
        }
        if(sum==0  || sum%11==0)
        printf("%s is a multiple of 11.\n",s);
        else
        printf("%s is not a multiple of 11.\n",s);
    }
}
