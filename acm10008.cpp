#include<stdio.h>
main()
{
 int x,i,j,value[26]={0},test;
 char str[10000];
 scanf("%d",&test);
 for(j=0;j<=test;j++)
 {
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]>='A'&&str[i]<='Z')
    {
     x=str[i]-65;
     ++value[x];
    }
    else if(str[i]>='a'&&str[i]<='z')
    {
     x=str[i]-97;
     ++value[x];
    }
   }
 }
int *p,ch,max;
for(i=0;i<26;i++)
{
    max=value[i];
    for(j=0;j<26;j++)
    {
        if(max<value[j])
        {
            max=value[j];
            ch=j;
            p=&value[j];
        }
    }
    if(max)
    printf("%c %d\n",(65+ch),max);
    *p=0;
}
 return 0;
}
