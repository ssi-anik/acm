#include<math.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char s[30];
	int t=1;
	while(1)
	{
		scanf("%s",s);
		if(strcmp(s,"*")==0)
			break;
		else if(strcmp(s,"Hajj")==0)
			printf("Case %d: Hajj-e-Akbar\n",t++);
		else if(strcmp(s,"Umrah")==0)
			printf("Case %d: Hajj-e-Asghar\n",t++);
	}

	return 0;
}

