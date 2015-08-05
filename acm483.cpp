#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char input[10001],varify[10001];
	while(gets(input))
	{
		count=0;
		for(i=0;input[i]!='\0';i++)
		{
			if(input[i]!=' ' && input[i]!='\t')
			{
			    varify[count]=input[i];
			    ++count;
			}
			else
			{
				for(--count;count>=0;--count)
				printf("%c",varify[count]);
				if(input[i]==' ')
				printf(" ");
				else if(input[i]=='\t')
				printf("\t");
				count=0;
				varify[10001]=NULL;
			}
		}
		for(--count;count>=0;--count)
		printf("%c",varify[count]);
		printf("\n");
	}
	return 0;
}
