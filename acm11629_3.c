#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct MyStruct
{
	char partyName[21];
	int vote;
	struct  MyStruct *front;
}link;
link *a[130];
int main(void)
{
	link *head,*nptr,*tptr , *pptr;
	head = tptr = nptr = pptr = NULL;
	int testCase=1,party,guess=1,i;
	scanf("%d %d",&party,&guess);
	for(i=1;i<=party;i++)
	{
		char partyName[21];
		int x,y;
		scanf("%s %d.%d",partyName,&x,&y);
		nptr = (link*) malloc ( 1 * sizeof(link));
		nptr->vote = x*10+y;
		strcpy(nptr->partyName,partyName);
		nptr->front = NULL;
		char c = partyName[0];
		if(a[c]==NULL)
			a[c] = nptr;
		if(head==NULL)
		{
			tptr = head = nptr;

		}
		else
		{
			tptr = head;
			char n[21];
			while (1)
			{
				strcpy(n,tptr->partyName);
				if(n[0]>partyName[0])
				{
					break;
				}
				if(tptr->front==NULL)
					break;
				pptr = tptr;
				tptr = tptr->front;
			}
			if (tptr==head && n[0]>partyName[0])
			{
				head = nptr;
				nptr->front = tptr;
			}
			else if(n[0] > partyName[0])
			{
				pptr->front = nptr;
				nptr->front = tptr;
			}
			else
			{
				tptr->front = nptr;
				tptr = nptr;

			}
		}
	}
	char gt,gte,lt,lte,e;

	for(i=1;i<=guess;i++)
	{
		gt=gte=lt=lte=e='n';
		int x=0,y=0;
		char partyName[21];
		while (scanf("%s",partyName))
		{
			if(gt=='y' || gte=='y' || lt=='y' || lte=='y' || e=='y')
			{
				sscanf(partyName,"%d",&y);
				y *= 10;
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
				tptr=a[partyName[0]];
				while (strcmp(tptr->partyName,partyName)!=0 && tptr!=NULL)
				{
					tptr = tptr->front;
				}
				x += tptr->vote;
			}
		}
		printf("Guess #%d ",i);
		if(gt=='y')
		{
			if(x> y)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(gte=='y')
		{
			if(x >= y)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(lt=='y')
		{
			if(x < y)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(lte=='y')
		{
			if(x <= y )
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
		else if(e=='y')
		{
			 if(x == y)
				printf("was correct.\n");
			else
				printf("was incorrect.\n");
		}
	}
	return 0;
}
