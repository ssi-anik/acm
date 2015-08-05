/*Problem no: 488;   Problem name: Triangle Wave*/

#include<stdio.h>

int main()
{
    int i,j,k,l,t_cs,mpt,fre;

    scanf("%d",&t_cs);

    for(i=0;i<t_cs;i++)
    {
      scanf("%d",&mpt);
      scanf("%d",&fre);

      for(j=0;j<fre;j++)
      {
         for(k=0;k<mpt;k++)
         {
            for(l=0;l<=k;l++)
               printf("%d",k+1);
            printf("\n");
         }

         for(k=mpt-1;k>0;k--)
         {
            for(l=0;l<k;l++)
                printf("%d",k);
            printf("\n");
         }

         if(j==fre-1)
            break;
         printf("\n");
    }
    if(i!=t_cs-1)
       printf("\n");
   }
    return 0;
}
