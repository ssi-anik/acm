#include<stdio.h>
int main()
{
    int i,a,b,j;
    while(scanf("%d %d",&a,&b)==2)
    {

        if(a==-1 && b==-1)
        return 0;

      if(b>a)
      {
          i=b-a;
          j=(a+100)-b;
          if(i<j)
          printf("%d\n",i);
          else
          printf("%d\n",j);
      }

      else
      {
          i=a-b;
          j=(b+100)-a;
          if(i<j)
          printf("%d\n",i);
          else
          printf("%d\n",j);
      }

    }

    return 0;
}

