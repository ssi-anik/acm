#include<stdio.h>
#include<string.h>

int main()
{
    int i,toBeDivideInGroups;
	char fullString[120];
    while(scanf("%d ",&toBeDivideInGroups)&& toBeDivideInGroups)
    {
		scanf("%s",fullString);
		toBeDivideInGroups = strlen(fullString)/toBeDivideInGroups;
        char hold[120];
		memset(hold,'\0',sizeof(char)*120);
        hold[toBeDivideInGroups] = '\0';
        i=0;
        char c;
		int j=0;
        for(;(c=fullString[j++])!='\0';)
        {
            hold[toBeDivideInGroups - (++i)] = c;
            if(i==toBeDivideInGroups || fullString[j]=='\0')
            {
                printf("%s",hold);
                i=0;
            }

        }
        printf("\n");
    }
    return 0;
}
