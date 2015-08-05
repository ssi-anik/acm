#include<stdio.h>
long int bal(long int x);

int main()
{
long int a,b,c=0,t;

scanf("%ld",&t);

while (t--)
{
scanf("%ld",&a);

b=bal(a);

while (a!=b)
{
a+=b;
b=bal(a);
c++;
}

printf("%ld %ld\n",c,a);
c=0;

}
return 0;
}
long int bal(long int x)
{
long int y,z=0;

while (x!=0)
{
y=x%10;
x/=10;
z=(z*10)+y;
}

return (z);
}