#include<stdio.h>
#define M 1000
main()
{
    unsigned int C;
    while(scanf("%u",&C)!=EOF)
    {
        unsigned int N=0,i=0,j=1,k=0;
        while(j<=C)
        {
            scanf("%u",&N);
            unsigned int g[M]={0};
            float sum=0,avrg=0;
            while(k<N)
            {
                scanf("%u",&g[k]);
                sum+=g[k];
                k++;
            }
            k=0;
            avrg=(sum/(float)N);
            float count=0;
            for(i=0;i<N;i++)
            {
                if(g[i]>avrg)
                {
                    count++;
                }
            }
            float stuavrg=0;
            stuavrg= (count/(float)N)*100;
            printf("%.3f%c",stuavrg,37);
            j++;
        }
    }
    return 0;

}
