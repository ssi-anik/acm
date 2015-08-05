#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    double U,P,I;
    bool Uloaded,Ploaded,Iloaded;
    Uloaded=Ploaded=Iloaded = false;
    int testCaseRunning=1,totalTestCase;
    scanf("%d\n",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        printf("Problem #%d\n",testCaseRunning++);
        char c,previousChar='\0';
        char str[200];
        gets(str);
        Uloaded=Ploaded=Iloaded = false;
        U=P=I=0;
        int i=0;
        while((c=str[i++])!='\0')
        {
            if(c=='=')
            {
                if(previousChar=='U')
                {
                    Uloaded = true;
					char value[30];
					int j=0;
					while(!isalpha(str[i]))
						value[j++]=str[i++];
					value[j]='\0';
					c=str[i];
					U = atof(value);
                    if(c=='m')
                    U = (U*pow(10,-3));
                    if(c=='K' || c=='k')
                    U = (U*pow(10,3));
                    if(c=='M')
                    U = (U*pow(10,6));
                }

                else if(previousChar=='P')
                {
                    Ploaded = true;
                    char value[30];
					int j=0;
					while(!isalpha(str[i]))
						value[j++]=str[i++];
					value[j]='\0';
					c=str[i];
					P=atof(value);
                    if(c=='m')
                    P = (P*pow(10,-3));
                    if(c=='k')
                    P = (P*pow(10,3));
                    if(c=='M')
                    P = (P*pow(10,6));
                }

                else if(previousChar=='I')
                {
                    Iloaded = true;
                    char value[30];
					int j=0;
					while(!isalpha(str[i]))
						value[j++]=str[i++];
					value[j]='\0';
					c=str[i];
					I = atof(value);
                    if(c=='m')
                    I = (I*pow(10,-3));
                    if(c=='K' || c=='k')
                    I = (I*pow(10,3));
                    if(c=='M')
                    I = (I*pow(10,6));
                }
            }
            if(c!=' ')
                previousChar = c;
            if((Uloaded==true&&Ploaded==true)||(Uloaded==true && Iloaded==true) || (Ploaded==true && Iloaded==true))
				break;
        }
        if(Ploaded==false)
        {
            P = U*I;
            printf("P=%.2lfW\n",P);
        }
        else if(Uloaded==false)
        {
            U = (double) P / (double) I;
            printf("U=%.2lfV\n",U);
        }
        else if(Iloaded==false)
        {
            I = (double) P / (double) U;
            printf("I=%.2lfA\n",I);
        }
        printf("\n");
    }
    return 0;
}
