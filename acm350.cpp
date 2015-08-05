#include<stdio.h>
#include<math.h>
#include<iostream>
#include<utility>
#include<map>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	long z,i,m,l;
	int c = 0;
	while(scanf("%ld %ld %ld %ld",&z,&i,&m,&l) == 4)
	{

		map<long,bool,less<long > > M;

		if(!z && !i && !m && !l)
			break;
		int nl= -1;
		c ++;
		while(1)
		{
			l = (z * l + i) % m;
			nl++;
			if(M[l]==true)
			{
				printf("Case %d: %d\n",c,nl);break;
			}
			else
			{
				M[l]=true;
			}
		}

	}
	return 0;
}
