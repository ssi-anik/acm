#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char s[99999],t[99999];
    long int s1,t1,i,j;
    s1=t1=0;
    while(scanf("%s%s",s,t)!=EOF)
    {
        s1=strlen(s);
        t1=strlen(t);
        int pos=0,msg=0;
        for(i=0;s[i]!='\0';i++)
        {
            for(j=0;t[j]!='\0';j++)
            {
                if(s[i]==t[j])
                {
                    if(pos<=j)
                    {
                        pos=j;
                        ++msg;
                        t[j]=(char)32;
                        break;
                    }
                }
            }
        }
        if(msg==s1)
        printf("Yes\n");
        else
        printf("No\n");
        msg=0;
    }

    return 0;
}
