#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    unsigned long long sum=0,i,j,k;
    char str[10001];
    while(gets(str))
    {
        if(atoi(str)==0)
        break;
        sum=0;
        for(i=0;str[i]!='\0';i++)
        {
            sum+=(str[i]-'0')*(pow(2,strlen(str)-i)-1);
        }
        printf("%llu\n",sum);
    }
    return 0;
}
