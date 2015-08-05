#include<stdio.h>
#include<string.h>

int main()
{
        int i=0,party=0,guess=0,testCaseRunning=1;
        scanf("%d %d\n",&party,&guess);
        char arrParty[60][30];
        int arrPerc[60],dValue=0, d1, d2;
        for(i=0;i<party;i++)
        {
                scanf("%s %d.%d",arrParty[i],&d1,&d2);
				d1 = 10*d1+d2;
				arrPerc[i] = d1;
        }
        for(i=0;i<guess;i++)
        {
                char grtThn='n',grtThnEql = 'n', lessThn='n',lessThnEql = 'n', plus = 'n', Equal = 'n';
                char input[200];
                int x=0,result=0;
                while (1)
                {
                        scanf("%s",input);
                        if((input[0]>='0' && input[0]<='9') && (lessThn=='y' || lessThnEql=='y' || grtThn == 'y' || grtThnEql == 'y' || Equal == 'y' ))
                        {
                                sscanf(input,"%d",&result);
								result *= 10;
                                break;
                        }
                        else if(strcmp(input,"+")==0)
                                continue;
                        else if(strcmp(input,">")==0)
                                grtThn = 'y';
                        else if(strcmp(input,">=")==0)
                                grtThnEql = 'y';
                        else if(strcmp(input,"<")==0)
                                lessThn = 'y';
                        else if(strcmp(input,"<=")==0)
                                lessThnEql = 'y';
                        else if(strcmp(input,"=")==0)
                                Equal = 'y';
                        else
                        {
                                int j = 0;
                                for(j=0; ; j++)
                                        if(strcmp(arrParty[j],input)==0)
                                                break;
                                x += arrPerc[j];
                        }
                }
                printf("Guess #%d ",i+1);
                if(Equal=='y')
                {
                        if(x == result)
                                printf("was correct.\n");
                        else
                                printf("was incorrect.\n");
                }
                else if(grtThn == 'y')
                {
                        if(x > result)
                                printf("was correct.\n");
                        else
                                printf("was incorrect.\n");
                }
                else if(grtThnEql == 'y')
                {
                        if(x >= result)
                                printf("was correct.\n");
                        else
                                printf("was incorrect.\n");
                }
                else if(lessThn == 'y')
                {
                        if(x < result)
                                printf("was correct.\n");
                        else
                                printf("was incorrect.\n");
                }
                else if(lessThnEql == 'y')
                {
                        if(x <= result)
                                printf("was correct.\n");
                        else
                                printf("was incorrect.\n");
                }
        }
        return 0;
}

