#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstdlib>
#include<malloc.h>
#include<string.h>

using namespace std;

int main()
{
    unsigned long long *arr;
    arr = (unsigned long long*) malloc ( 10003*sizeof(unsigned long long));
	int i=1;
	memset(arr,0,sizeof(unsigned long long)*10003);
    while(cin>>arr[i])
    {
		sort(arr+1,arr+i+1);
		if(i%2==1)
		{
			if(i==1)
			{
				cout<<arr[1]<<"\n";
				++i;
				continue;
			}
			double n = ceil((double)i/2);
			cout<< arr[(int)n]<<endl;
		}
		else if(i%2==0)
		{
			int n= i/2;
			n = ( arr[n] + arr[n+1] ) / 2;
			cout<<n<<endl;
		}

        ++i;
    }
    return 0;
}
