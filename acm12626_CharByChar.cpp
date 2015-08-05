#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>

using namespace std;


int main()
{
	int testCaseRunning = 1  ,
		totalTestCase;
	scanf("%d\n",&totalTestCase);

	while (testCaseRunning <= totalTestCase)
	{
		long a , g , i , m , r , t ;
		a = g = i = m = r = t = 0;
		char s[700] = "" ;
		if(testCaseRunning == totalTestCase )
		{
			gets(s);

			int it;
			for(it=0;it < strlen(s) ; it++)
			{
				char c = s[it] ;
				if(c == 'A' )
					++a ;
				else if(c == 'G' )
					++g ;
				else if( c == 'I' )
					++i ;
				else if( c == 'M')
					++m ;
				else if(c == 'R' )
					++r ;
				else if(c == 'T' )
					++t ;
			}
		}
		else
		{
			char c;
			while ((c=getchar())!='\n')
			{
				if(c == 'A' )
					++a ;
				else if(c == 'G' )
					++g ;
				else if( c == 'I' )
					++i ;
				else if( c == 'M')
					++m ;
				else if(c == 'R' )
					++r ;
				else if(c == 'T' )
					++t ;
			}
		}

		if(a >=3 && g >=1 && i >=1 && m >= 1 && r >= 2 && t >= 1 )
		{
			a = ( a - a%3 ) / 3 ;
			r = ( r - r%2 ) / 2 ;
			int x = min(g,min(i,min(m,t)));
			if( g != x)
				g = x;
			if( i != x )
				i = x;
			if( m != x )
				m = x;
			if( t != x )
				t = x;

			x = a >= r ? r : a ;

			if( x == a && a <= g )
				printf("%d\n",a);
			else if( x == a && a > g )
				printf("%d\n", g );
			else if( x == r && r <= g )
				printf("%d\n",r);
			else if( x == r && r > g )
				printf("%d\n",g);

		}
		else
			printf("0\n");

		++testCaseRunning;
	}
	return 0;
}
