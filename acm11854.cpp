#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long double a,b,c;
    a=b=c=0;
    while(cin>>a>>b>>c)
    {
        if(a== 0 && b==0 && c==0)
        break;
        else if( ( pow(a,2) + pow(b,2) ) == pow(c,2) )
        cout<<"right\n";
        else if( ( pow(b,2) + pow(c,2) ) == pow(a,2) )
        cout<<"right\n";
        else if( ( pow(a,2) + pow(c,2) ) == pow(b,2) )
        cout<<"right\n";
        else
        cout<<"wrong\n";
    }
    return 0;
}
