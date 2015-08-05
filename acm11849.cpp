#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    unsigned long long N,M;
    while(scanf("%llu %llu",&N,&M) && (N>0 || M>0))
    {
        unsigned long long i=0,*JackN,jill,same=0;
        JackN = (unsigned long long*) malloc (1000000*sizeof(unsigned long long));

        for(i=0;i<N;i++)
        scanf("%llu",&JackN[i]);

        for(i=0;i<M;i++)
        {
            scanf("%llu",&jill);
            unsigned long long  first,last,middle;
            first = 0;
            last = N - 1;
            middle = (first+last)/2;

            while( first <= last )
            {
                if ( JackN[middle] == jill )
                {
                    ++same;
                    break;
                }
                else if ( JackN[middle] < jill )
                first = middle + 1;
                else
                    last = middle - 1;

                    middle = (first + last)/2;
            }
        }
        printf("%llu\n",same);
		free(JackN);
    }
    return 0;
}



/*
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    unsigned long long N,M;
    while(scanf("%llu %llu",&N,&M) && (N>0 || M>0))
    {
        unsigned long long i=0,*JackN,jill,same=0;
        JackN = (unsigned long long*) malloc (1000000*sizeof(unsigned long long));

        for(i=0;i<N;i++)
        scanf("%llu",&JackN[i]);
		same=0;
        for(i=0;i<M;i++)
        {
            scanf("%llu",&jill);
            unsigned long long low = 0, mid, high = N-1;

			while (low <= high)
			{
				mid = (low + high) / 2;
				if (jill < JackN[mid])
					high = mid - 1;
				else if (jill > JackN[mid])
					low = mid + 1;
				else
					break;
			}

			if (jill == JackN[mid])
				++same;
        }
        printf("%llu\n",same);
		free(JackN);
    }
    return 0;
}
*/
