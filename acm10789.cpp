#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char c;
	long i,j;
    int testCaseRunning=1,totalTestCase;
    scanf("%d\n",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
		long arr[156]={0};
        int max=0;
        char str[2100];
        gets(str);
        i=0;
        printf("Case %d: ",testCaseRunning++);
        while((c=str[i++])!='\0')
        {
            ++arr[c];
            if(max<c)
                max=c;
        }
		bool prime = true,empty=true;
        for(i = 1; i<=max;i++)
        {
            prime = true;
            if(arr[i]>1)
            {
                for(j=2;j<arr[i];j++)
                {
                    if(arr[i]%j==0)
                    {
                        prime = false ;
                        break;
                    }
                }
				if(prime==true)
				{
					empty=false;
					printf("%c",i);
				}
            }
        }
		if(empty==true)
		{
			printf("empty");
		}
        printf("\n");

    }
    return 0;
}
