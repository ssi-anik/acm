#include<stdio.h>
#include<string.h>

int main()
{
    int h1,h2,m1,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2))
    {
        if(h1==0 && h2 ==0 && m1==0 && m2 ==0)
        break;
        int totalMinute=0;
        if(h1 == h2 && m1>m2)
        {
            totalMinute = 24*60 - (m1 - m2);
        }
        else if( h1 == h2 && m1<m2)
        {
            totalMinute = m2 - m1;
        }

        else if( h1 < h2 )
        {
            totalMinute = ( h2 - ( h1 + 1 )) * 60 ;
            totalMinute += (60 - m1 ) + m2 ;
        }

        else if(h1 > h2)
        {
            totalMinute = ( (24 - h1) + ( h2 - 1 ) ) * 60;
            totalMinute += ( 60 - m1 ) + m2 ;
        }

        printf("%d\n",totalMinute);
    }
    return 0;
}
