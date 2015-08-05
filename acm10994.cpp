#include<iostream>

using namespace std;

long long solve ( long long n)
{
	if(n  <=  0 )
		return  0 ;
	long long ans = 0 ;
	while(n)
	{
		ans  +=  ( n / 10 ) * 45 ;
		for( long long i = ( n / 10 ) * 10 + 1 ; i  <=  n; i++ )
			ans  +=  i  %  10 ;
		n  /=  10 ;
	}
	return  ans;
}

int  main ()
{
	int  p, q;
	while(scanf("%d %d",&p,&q))
	{
		if (p  <  0  &&  q  <  0 )  break ;
		cout  <<  solve (q)  -  solve (p  -  1 )  <<  endl;
	}
	return  0 ;
}
