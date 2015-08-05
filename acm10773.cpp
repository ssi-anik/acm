#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <vector>
#include <stack>
#include <string>
#include <list>
#include <map>
#include <queue>
#define pb push_back
#define MAX 1000000
using namespace std;
int main()
{
int t,i;
double d, v, u;

cin >> t;

for ( i = 0; i < t; i++) {

cin >> d >> v >> u;
cout << "Case " << i+1 << ": ";

if (v == 0 || v >= u) {
cout << "can't determine" << endl;
} else {
double result=fabs(d * 1.0 / u - d * 1.0 / sqrt(u*u - v*v));
printf("%.3lf\n",result);
}
}
return 0;
}