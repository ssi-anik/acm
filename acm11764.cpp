#include <stdio.h>

int main()
{
    int testCaseRunning=1,totalTestCase,wallLength[50];
    scanf("%d",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        printf("Case %d: ",testCaseRunning);
        int N,highJump=0,lowJump=0;
		scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
            scanf("%d",&wallLength[i]);
            if(i>=1)
            {
                if(wallLength[i]>wallLength[i-1])
                ++highJump;
                if(wallLength[i-1]>wallLength[i])
                ++lowJump;
            }
        }
        printf("%d %d\n",highJump,lowJump);
        ++testCaseRunning;
    }
    return 0;
}

