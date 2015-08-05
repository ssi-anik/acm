#include<stdio.h>

#define TooLowest -2147483647

int arr [100000 + 10];

int main ()
{
    int testCase;
	scanf ("%d", &testCase);
    int testCases = 0;

    while ( testCase-- )
	{
        int n; scanf ("%d", &n);
        arr [0] = 0;
        for ( int i = 1; i <= n; i++ )
			scanf ("%d", &arr[i]);

        int maximum = TooLowest;

        for ( int i = 1; i <= n; i++ )
		{
            int diff = arr [i] - arr [i - 1];
            if ( diff > maximum )
				maximum = diff;
        }

        int res = maximum;

        for ( int i = 1; i <= n; i++ )
		{
            int diff = arr [i] - arr [i - 1];
            if ( diff == maximum )
				maximum--;
            else if ( diff > maximum )
			{
				res++;
				break;
			}
        }

        printf ("Case %d: %d\n", ++testCases, res);
    }

    return 0;
}
