#include<stdio.h>

int main()
{
   int i,b1,b2,b3,g1,g2,g3,c1,c2,c3,bb1,bb2,bb3,gg1,gg2,gg3,cc1,cc2,cc3,min,t[6]={0};

   while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
   {
      bb1=b2+b3;
      gg1=g2+g3;
      cc1=c2+c3;

      bb2=b1+b3;
      gg2=g1+g3;
      cc2=c1+c3;

      bb3=b1+b2;
      gg3=g1+g2;
      cc3=c1+c2;

      t[0]=bb1+cc2+gg3;
      t[1]=bb1+gg2+cc3;
      t[2]=cc1+bb2+gg3;
      t[3]=cc1+gg2+bb3;
      t[4]=gg1+bb2+cc3;
      t[5]=gg1+cc2+bb3;

      min=t[0];
      for(i=0;i<6;i++)
         if(min>t[i])
            {min=t[i];}

      if(min==t[0])
         printf("BCG %d\n",t[0]);
      else if(min==t[1])
         printf("BGC %d\n",t[1]);
      else if(min==t[2])
         printf("CBG %d\n",t[2]);
      else if(min==t[3])
         printf("CGB %d\n",t[3]);
      else if(min==t[4])
         printf("GBC %d\n",t[4]);
      else
         printf("GCB %d\n",t[5]);

   }

   return 0;
}
