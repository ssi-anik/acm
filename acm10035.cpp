#include<stdio.h>
int main()
{
    int mod,mod1,mod2,sum,carry;
    unsigned long long i,j;
    scanf("%llu%llu",&i,&j);
    while(i!=0 && j!=0)
    {
        carry=mod=0;
        while(i!=0 || j!=0)
        {
            mod1=i%10;
            i/=10;
            mod2=j%10;
            j/=10;
            sum=mod1+mod2+mod;
            mod=0;
            if(sum>9)
            {
                mod=1;
                ++carry;
            }
        }
        if(carry==0)
        printf("No carry operation.\n");
        else if(carry==1)
        printf("%d carry operation.\n",carry);
        else
        printf("%d carry operations.\n",carry);
        scanf("%llu%llu",&i,&j);
    }
    return 0;
}
