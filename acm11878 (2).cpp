#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    unsigned long a,b,count=0;
    char result[10],calculated[10],c;
    while(scanf("%lu%c%lu=%s",&a,&c,&b,result)!=EOF)
    {
        switch(c)
        {
            case '+':
                sprintf(calculated,"%lu",a+b);
                if(strcmp(calculated,result)==0)
                    ++count;
                break;
            case '-':
                sprintf(calculated,"%lu",a-b);
                if(strcmp(calculated,result)==0)
                    ++count;
                break;
            case '*':
                sprintf(calculated,"%lu",a*b);
                if(strcmp(calculated,result)==0)
                    ++count;
                break;
            case '/':
                sprintf(calculated,"%lu",a/b);
                if(strcmp(calculated,result)==0)
                    ++count;
                break;
        }
    }
    printf("%lu\n",count);
    return 0;
}
