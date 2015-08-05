#include<stdio.h>
#include<string.h>

int main()
{
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
	getchar();
    while(testCaseRunning<=totalTestCase)
    {
        char number[6];
        gets(number);
        if(strlen(number)==5)
        printf("3\n");
        else if(strlen(number)==3)
        {
            if(strcmp(number,"one")==0)
            printf("1\n");
            else if(strcmp(number,"two")==0)
            printf("2\n");
            else
            {
				int count=0;
                if(number[0]=='o')
					++count;
				if(number[1]=='n')
					++count;
				if(number[2]=='e')
					++count;
				if(count==2)
					printf("1\n");
				else
					printf("2\n");

            }
        }
        ++testCaseRunning;
    }

    return 0;
}
