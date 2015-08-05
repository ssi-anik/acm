#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    getchar();
    while(testCaseRunning++<=totalTestCase)
    {
        printf("Case %d: ",testCaseRunning-1);
        char s1[200],s2[200];
        gets(s1);
        gets(s2);
        if(strlen(s1)==strlen(s2))
        {
            if(strcmp(s1,s2)==0)
                printf("Yes\n");
            else
                printf("Wrong Answer\n");
        }
        else
        {
            int i=0,j=0,k=0,l=0;
            char output1[200],output2[200];
            for( ;i<strlen(s1) || j<strlen(s2); )
            {
                if(i<strlen(s1))
                {
                    if(s1[i]!=' ')
                    {
                        output1[k]= s1[i];
                        output1[++k] = '\0';
                    }
                    ++i;
                }
                if(j<strlen(s2))
                {
                    if(s2[j]!=' ')
                    {
                        output2[l] = s2[j];
                        output2[++l] = '\0';
                    }
                    ++j;
                }
            }

            if(strcmp(output1,output2)==0)
                printf("Output Format Error\n");
            else
                printf("Wrong Answer\n");
        }

    }
    return 0;
}
