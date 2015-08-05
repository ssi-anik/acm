#include<stdio.h>
 main()
 {
     int a,i,j,b,c[10],d=1;
     scanf("%d",&a);
     for(i=0;i<a;i++)
     {
        scanf("%d",&b);
        for(j=0;j<b;j++)
            scanf("%d",&c[j]);
        printf("Case %d: %d\n",d,c[b/2]);
        d++;
     }
    return 0;
 }
