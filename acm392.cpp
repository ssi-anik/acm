#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long a[30],value=0;
    int i,j,printStarted=0;
    while(scanf("%ld",&a[0])!=EOF)
    {
        printStarted=0;
        for(i=1;i<9;i++)
            scanf("%ld",&a[i]);
        for(i=0,j=8,value = 0;i<9;i++,--j)
        {
            value = a[i];
            if(value<0)
            {
                if(printStarted==0)
                {
                    printStarted=1;
                    if(j==0)
                        printf("%ld",a[i]);
                    else if(j==1)
                    {
						if(value!= -1)
							printf("%ldx",a[i]);
						else
							printf("-x");
					}
                    else
                    {
						if(value!=-1)
							printf("%ldx^%d",a[i],j);
						else
							printf("-x^%d",j);
					}

                }

                else
                {
                    printf(" - ");
                    if(j==0)
                        printf("%ld",abs(a[i]));
                    else if(j==1)
                    {
						if(value!=-1)
							printf("%ldx",abs(a[i]));
						else
							printf("x");
					}
                    else
                    {
						if(value!=-1)
							printf("%ldx^%d",abs(a[i]),j);
						else
							printf("x^%d",j);
					}
                }
            }

            else if(value>0)
            {
                if(printStarted==0)
                {
                    printStarted=1;
                    if(j==0)
                        printf("%ld",value);
                    else if(j==1)
                    {
						if(value!= 1)
							printf("%ldx",value);
						else
							printf("x");
					}
                    else
                    {
						if(value!=1)
							printf("%ldx^%d",value,j);
						else
							printf("x^%d",j);
					}

                }

                else
                {
                    printf(" + ");
                    if(j==0)
                        printf("%ld",value);
                    else if(j==1)
                    {
						if(value!=1)
							printf("%ldx",value);
						else
							printf("x");
					}
                    else
                    {
						if(value!=1)
							printf("%ldx^%d",value,j);
						else
							printf("x^%d",j);
					}
                }
            }
            value=0;
        }
        if(printStarted==0)
        printf("0");
		printf("\n");
    }
    return 0;
}
