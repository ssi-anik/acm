#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define __SIZE_ST__     100000
int main()
{
    char *mString,*sub_string;
    mString = (char *)malloc(sizeof(char) * __SIZE_ST__);
    sub_string = (char *)malloc(sizeof(char) * 1000);
    int no_of_test_cases;
    scanf("%d",&no_of_test_cases);
    int i=1;
    int query=0;
    while(i++<=no_of_test_cases)
    {
        scanf("%s%d",mString,&query);
        int j=1;
        while(j++<=query)
        {
            scanf("%s",sub_string);
            int x,y,c;
            x=c=0;y=0;
            for(x=0;mString[x]!='\0';x++)
            {
                if(sub_string[0]==mString[x])
                {
                    while(sub_string[y]!='\0')
                    {
                        if(sub_string[y++]==mString[x++])
                        c=1;
                        else
                        {
                            y=strlen(sub_string);
                            c=0;
                            break;
                        }
                    }
                }
                if(sub_string[y]=='\0')
                break;
            }
            if(c==1)
            printf("y\n");
            else
            printf("n\n");
        }
    }
    return 0;
}
