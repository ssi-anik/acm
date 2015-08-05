#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct MyStruct
{
	char partyName[21];
	int vote;
	struct MyStruct* next;
};
int main()
{
    struct MyStruct *head,*nptr,*tptr;
    int party,guess;
	scanf("%d %d",&party,&guess);
	int i=0;
	head = tptr = nptr = NULL;
	char partyName[21];
	for(i=1;i<=party;i++)
	{
		int a,b;
		scanf("%s %d.%d",partyName,&a,&b);
		nptr = (struct MyStruct*) malloc(1*sizeof(struct MyStruct));
		strcpy(nptr->partyName,partyName);
		nptr->vote = a*10+b;
		nptr->next = NULL;
		if(head==NULL)
		{
			head = tptr = nptr;
		}
		else
		{
			tptr->next = nptr;
			tptr = nptr;
		}

	}
	char gt,gte,lt,lte,e;

	for(i=1;i<=guess;i++)
	{
		gt=gte=lt=lte=e='n';
		int a=0,b=0;
		while (scanf("%s",partyName))
		{
			if(gt=='y' || gte=='y' || lt=='y' || lte=='y' || e=='y')
			{
				sscanf(partyName,"%d",&b);
				b *= 10;
				break;
			}
			else if(strcmp(partyName,">")==0)
				gt='y';
			else if(strcmp(partyName,">=")==0)
				gte = 'y';
			else if(strcmp(partyName,"<")==0)
				lt = 'y';
			else if(strcmp(partyName,"<=")==0)
				lte = 'y';
			else if(strcmp(partyName,"=")==0)
				e = 'y';
			else if(strcmp(partyName,"+")!=0)
			{
				tptr=head;
				while (strcmp(tptr->partyName,partyName)!=0 && tptr!=NULL)
				{
					tptr = tptr->next;
				}
				a += tptr->vote;
			}
		}
		printf("Guess #%d ",i);
		if(gt=='y')
		{
			if(a > b)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(gte=='y')
		{
			if(a >= b)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(lt=='y')
		{
			if(a < b)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(lte=='y')
		{
			if(a <= b)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(e=='y')
		{
			 if(a == b)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
	}
	return 0;
}
