#include<stdio.h>
#include<string.h>

struct newspaper
{
    int value;
    char c;
    newspaper *next;

};

int main()
{
    long totalTestCases,testCaseRunning=1;
    scanf("%ld",&totalTestCases);
    newspaper *head=NULL,*tptr,*nptr;
    while(testCaseRunning<=totalTestCases)
    {

        long paid;
        scanf("%ld",&paid);
		getchar();
        long i;
        for(i=1;i<=paid;i++)
        {
            nptr = new(newspaper);
			nptr->c=getchar();
			getchar();
            scanf("%d",&nptr->value);
			getchar();
            nptr->next = NULL;
            if(head==NULL)
            head=tptr=nptr;
            else
            {
                tptr->next=nptr;
                tptr=nptr;
            }
        }
        long lines;
        scanf("%ld",&lines);
		getchar();
        long arr[256]={0};
        char c;
        for(i=0;i<lines;)
        {
            c=getchar();
            if(c=='\n')
            ++i;
            else
            {
                ++arr[c];
            }
        }
        long totallyPaid=0;
        for(tptr=head,i=0;i<paid;i++,tptr=tptr->next)
        {
            totallyPaid+=(arr[tptr->c]*tptr->value);
        }
        printf("%.2lf$\n",totallyPaid/100.0);
        ++testCaseRunning;
		head=NULL;

    }
    return 0;
}
