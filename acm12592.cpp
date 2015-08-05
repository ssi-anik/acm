#include<iostream>
#include<map>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    freopen("D:\\acmin.txt","r",stdin);
    string s1,s2;
    int input;
    cin >> input;
    getchar();
    map<string , string> mp;
    mp.clear();
    while(input--)
    {
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
    }
    cin >> input;
    getchar();
    while(input--)
    {
        getline(cin,s1);
        cout<<mp[s1]<<endl;
    }
    return 0;
}
