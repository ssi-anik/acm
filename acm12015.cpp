#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct hold
{
    int value;
    char str[200];
    hold *next;
};

int main()
{
    hold *head,*tptr,*nptr;
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        head=tptr=NULL;
		head = new(hold);
        head->value=0;
        strcpy(head->str," ");
        head->next = NULL;
        tptr=head;
        int input=1;
        for(input=1;input<=10;input++)
        {
            nptr = new(hold);
            scanf("%s %d",nptr->str,&nptr->value);
			nptr->next = NULL;
            if(head->value<nptr->value)
            {
                head->value = nptr->value;
                head->next=NULL;
                strcpy(head->str,nptr->str);
            }
            else if(tptr->value==nptr->value)
            {
                if(head->value==0 && strcmp(head->str," ")==0)
                {
                    head = tptr = nptr;

                }
                else
                {
                    tptr->next=nptr;
                    tptr=nptr;
                }
            }
        }
        printf("Case #%d:\n",testCaseRunning);
        for(tptr=head;;tptr = tptr ->next)
        {
			printf("%s\n",tptr->str);
			if(tptr->next==NULL)
				break;

		}
        ++testCaseRunning;
    }
}
