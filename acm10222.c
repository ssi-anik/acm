#include<stdio.h>
#include<string.h>
#include<ctype.h>
char input[]="234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./",
	output[]="`1234567890qwertyuiop[asdfghjklzxcvbnm,";
int main()
{
	char c,*p;
	while ((c=getchar())!=EOF)
	{
		if(c==' ')
			printf(" ");
		else if(c=='\n')
			printf("\n");
		else
		{
			if(isupper(c))
				c = tolower(c);
			p = strchr(input,c);
			int x = p - input;
			printf("%c",output[x]);
		}
	}
	return 0;
}

