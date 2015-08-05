#include<stdio.h>
#include<math.h>

long squre(long S)
{
   return S*S;
}

long bigmod(long b,long p,long m)
{
   if(p==0)
      return 1;
   else if(p%2==0)
      return squre(bigmod(b,p/2,m))%m;
   else
      return (b%m)*bigmod(b,p-1,m)%m;
}

int main()
{
   long b,p,m,num;

   while(scanf("%ld %ld %ld",&b,&p,&m)==3)
   {
      num=bigmod(b,p,m);
      printf("%ld\n",num);
   }
   return 0;
}
