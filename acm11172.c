
/*Problem H>>acm 11172<<
Relational Operators
Input: Standard Input
Output: Standard Output

Some operators checks about the relationship between two values and these operators are called relational operators. Given two numerical values your job is just to find out the relationship between them that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and second one is equal.

Input
First line of the input file is an integer t (t<15) which denotes how many sets of inputs are there. Each of the next t lines contain two integers a and b (|a|,|b|<1000000001).

Output
For each line of input produce one line of output. This line contains any one of the relational operators “>”, “<” or “=”, which indicates the relation that is appropriate for the given two numbers.
Input:
5
1 2
3 100
50 1
33333 31222
4434 4434
output:
<
<
>
>
=
*/
#include<stdio.h>
main()
{
    long long int a,b,test,n=1;
    scanf("%lld",&test);
    while(n<=test)
    {
        scanf("%lld%lld",&a,&b);
        if(a<b)
        printf("<\n");
        else if(a>b)
        printf(">\n");
        else if(a==b)
        printf("=\n");

        ++n;
    }
    return 0;
}
