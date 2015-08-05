#include <iostream>
#include <algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;

int main ()
{
    int dataset;
    scanf ("%d", &dataset);

    bool blank = false;

    while ( dataset-- ) {

        if ( blank )
            printf ("\n");
        blank = true;

        int n;
        int h;

        scanf ("%d %d", &n, &h);

        int a [18] = {0};

        for ( int i = 0; i < h; i++ )
            a [n - 1 - i] = 1;

        do {
            for ( int i = 0; i < n; i++ )
                printf ("%d", a [i]);
            printf ("\n");
        } while (next_permutation (a, a + n));

    }

    return 0;
}