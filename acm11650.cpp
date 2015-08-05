#include<stdio.h>
#include<math.h>

int main()
{
    int hh,mm,testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning++<=totalTestCase)
    {
        scanf("%d:%d",&hh,&mm);
        if(hh!=12 && mm!=0)
        {
            hh = 12 - hh - 1;
            mm = 60 - mm;
        }
        else if(hh==12 && mm==0)
        {
            ;
        }

        else
        {
            if(hh==12 || mm>0)
            {
                hh-=1;
                mm = 60 - mm;
            }
            else if(hh<12 && mm==0)
            {
                hh = 12 - hh;
            }
        }

        if(hh==0)
            hh=12;
        if(mm==60)
            mm=0;
        if(hh<10)
            printf("0%d",hh);
        else
            printf("%d",hh);
        printf(":");

        if(mm<10)
            printf("0%d",mm);
        else
            printf("%d",mm);
        printf("\n");
    }
    return 0;
}
