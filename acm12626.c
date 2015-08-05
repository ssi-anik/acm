#include<stdio.h>
#include<string.h>

int main()
{
	int testCaseRunning = 1  ,
		totalTestCase;
	scanf("%d\n",&totalTestCase);
	while (testCaseRunning++ <= totalTestCase )
	{
		long a , g , i , m , r , t ;
		a = g = i = m = r = t = 0;
		char c;
		int it=0;
		while((c=getchar())!='\n')
		{
			if(c==EOF)
				break;
			switch (c)
			{
			case 'A':
				++a;
				break;
			case 'G':
				++g;
				break;
			case 'I':
				++i;
				break;
			case 'M':
				++m;
				break;
			case 'R':
				++r;
				break;
			case 'T':
				++t;
				break;
			}
		}

		g = (g<=i)? (g<=m)? (g<=t) ? g : t : (m <= t ) ? m : t : ( i <= m )? ( i <= t )? i : t : ( m <= t )? m : t ;

		if( g == 0 )
		{
			printf("0\n");
			continue;
		}
		a = a / 3 ;
		r = r / 2 ;

		 a >= r ? r <= g ? printf("%d\n",r) : printf("%d\n",g) : a <= g ? printf("%d\n",a) : printf("%d\n",g) ;

	}
	return 0;
}
