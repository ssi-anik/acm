#include<stdio.h>
#include<string.h>
int main()
{
                int i,j,k=0,t,test=0,x=0;
                char str[2001];
                scanf("%d",&test);
                getchar();
                while(++k<=test)
                {
                                int cvalue[26]={0},svalue[26]={0},nvalue[10]={0},notprinted=0;
                                t=0;
                                gets(str);
                                for(i=0;str[i]!='\0';i++)
                                {
                                                if(str[i]>='A'&&str[i]<='Z')
                                                {
                                                                x=str[i]-65;
                                                                ++cvalue[x];
                                                }
                                                else if(str[i]>='a'&&str[i]<='z')
                                                {
                                                                x=str[i]-97;
                                                                ++svalue[x];
                                                }
                                                else if(str[i]>= '0'&& str[i]<='9')
                                                {
                                                                x=str[i]-48;
                                                                ++nvalue[x];
                                                }
                                }
                                printf("Case %d: ",k);
                                for(i=0;i<=9;i++)
                                {
                                                for(j=2;j<nvalue[i];j++)
                                                {
                                                                if((nvalue[i]%j)==0)
                                                                {
                                                                                t=1;
                                                                                break;
                                                                }
                                                }
                                                if(t==0 && nvalue[i]>1)
                                                printf("%c",48+i);
                                                else
                                                {
                                                                t=0;
                                                                ++notprinted;
                                                }
                                }
                                t=0;
                                for(i=0;i<26;i++)
                                {
                                                for(j=2;j<cvalue[i];j++)
                                                {
                                                                if(cvalue[i]%j==0)
                                                                {
                                                                                t=1;
                                                                                break;
                                                                }
                                                }
                                                if(t==0 && cvalue[i]>1)
                                                printf("%c",65+i);
                                                else
                                                {
                                                                ++notprinted;
                                                                t=0;
                                                }
                                }
                                t=0;
                                for(i=0;i<26;i++)
                                {
                                                for(j=2;j<svalue[i];j++)
                                                {
                                                                if(svalue[i]%j==0)
                                                                {
                                                                                t=1;
                                                                                break;
                                                                }
                                                }
                                                if(t==0 && svalue[i]>1)
                                                printf("%c",97+i);
                                                else
                                                {
                                                                ++notprinted;
                                                                t=0;
                                                }
                                }
                                if(notprinted==62)
                                printf("empty");
                                printf("\n");
                }
                return 0;
}
