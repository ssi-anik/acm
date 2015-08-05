#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct MyStruct
{
    char sub[20];
	int days;
	struct MyStruct *next;
} link;

int main()
{
	link *head , *tptr , *nptr;
	int testCaseRunning=1,totalTestCase;
	scanf("%d",&totalTestCase);
	while (testCaseRunning++<=totalTestCase)
	{
		head = tptr = nptr = NULL;
		int subjects;
		scanf("%d",&subjects);
		char c[20];
		int i=0,n;
		for(i=1;i<=subjects;i++)
		{
			scanf("%s %d",c,&n);
			nptr = (link*) malloc(1*sizeof(link));
			strcpy(nptr->sub,c);
			nptr -> days = n;
			nptr -> next = NULL;
			if(head==NULL)
			{
				tptr = head = nptr;
				tptr = nptr ;
			}
			else
			{
				tptr ->next = nptr;
				tptr = nptr;
			}
		}
		scanf("%d",&n);
		scanf("%s",c);
		tptr = head;
		printf("Case %d: ",testCaseRunning-1);
		while (tptr!=NULL && strcmp(tptr->sub,c)!=0)
		{
			tptr = tptr->next;
		}
		if(tptr!=NULL)
		{
			if(strcmp(tptr->sub , c)==0)
			{
				if(n>=tptr->days)
					printf("Yesss\n");
				else if(n<tptr->days)
				{
    			    if(n+5 >= tptr->days)
                        printf("Late\n");
                    else
                        printf("Do your own homework!\n");
				}
                
			}
		}
		else
		{
			printf("Do your own homework!\n");
		}
	}
	return 0;
}