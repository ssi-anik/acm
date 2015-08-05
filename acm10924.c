#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char str[100];
     while(scanf("%s",str)!=EOF)
     {
         int sum=0,j=0;
         for(i=0;str[i]!='\0';i++)
         {
             if(str[i]>='a'&&str[i]<='z')
             sum+=(str[i]-96);
             else if(str[i]>='A'&&str[i]<='Z')
             sum+=(str[i]-38);
         }
         for(i=2;i<sum;i++)
         if(sum%i==0)
         {
             j=1;
             break;
         }
         if(j==0)
         printf("It is a prime word.\n");
         else
         printf("It is not a prime word.\n");
     }
     return 0;
}
