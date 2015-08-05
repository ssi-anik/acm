#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    long i,j,k,sumOfChars=0;
    char c;

    while((c=getchar())!=EOF)
    {
        if(c>='A' && c<='Z')
        sumOfChars += ((c-64)+26);
        else if(c>='a' && c<='z')
        sumOfChars += (c-96);
        else if(c=='\n')
        {
            bool prime = true;
            for(i=2;i<sumOfChars;i++)
            {
                if(sumOfChars%i==0)
                    prime = false ;
            }
            if(prime == true )
                printf("It is a prime word.\n");
            else
                printf("It is not a prime word.\n");

            sumOfChars = 0;
        }
    }
    return 0;
}
