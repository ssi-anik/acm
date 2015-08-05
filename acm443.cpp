#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <math.h>

#define N 1000000

using namespace std;


int main ()
{
    set <double> H;
    H.insert (1);
    set <double> :: iterator it = H.begin ();

    while ( H.size () < 7000 ) {
        H.insert (*it * 2);
        H.insert (*it * 3);
        H.insert (*it * 5);
        H.insert (*it * 7);
        *it++;
    }

    vector <double> v (H.begin (), H.end ());

    int input;

    while ( scanf ("%d", &input) && input ) {
        char str [5];

        if ( input % 10 == 1 && (input % 100) / 10 != 1 )
            strcpy (str, "st");
        else if ( input % 10 == 2 && (input % 100) / 10 != 1 )
            strcpy (str, "nd");
        else if ( input % 10 == 3 && (input % 100) / 10 != 1)
            strcpy (str, "rd");
        else
            strcpy (str, "th");

        printf ("The %d%s humble number is %0.lf.\n", input, str, v [input - 1]);
    }

    return 0;
}
