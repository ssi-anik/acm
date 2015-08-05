#include<stdio.h>
#include<string.h>
main()
{
    unsigned long num,parity,binary[34];
    num=parity=0;
    while(scanf("%lu",&num))
    {
        if(num==0)
        break;
        int i,j,k,mod,div;
        i=j=k=mod=div=parity=0;
        for(;;)
        {
            mod=num%2;
            if(mod==1)
            ++parity;
            binary[i]=mod;
            div=num/2;
            if(div==0)
            break;
            else
            {
                num=div;
                i++;
            }
        }
        printf("The parity of ");
        for(i;i>=0;i--)
        printf("%lu",binary[i]);
        printf(" is %lu (mod 2).\n",parity);
    }
    return 0;
}
