#include<stdio.h>
#include<math.h>
main()
{
    int test_case,i,j;
    unsigned long long modsum,input;
    scanf("%d",&test_case);
    i=0;
    while(++i<=test_case)
    {
        scanf("%llu",&input);
        unsigned long long d=input;
        modsum=0;
        if(input<10)
        modsum+=pow(input,2);
        else
        while(input>=10)
        {
            modsum+=pow((input%10),2);
            input/=10;
            if(input<=9)
            modsum+=pow(input,2);
        }


        while(modsum>=10)
        {
            input=modsum;
            modsum=0;
            while(input>=10)
            {
                modsum+=pow((input%10),2);
                input/=10;
                if(input<=9)
                modsum+=pow(input,2);
            }
        }
        if(modsum==1)
        printf("Case #%d: %llu is a Happy number.\n",i,d);
        else
        printf("Case #%d: %llu is an Unhappy number.\n",i,d);
    }
    return 0;
}

