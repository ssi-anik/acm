#include<stdio.h>
#include<string.h>

#define MAX 200
void reverseStirng(char *mainString, char *result)
{
    int k=0;
    int i = 0;
    for (i = strlen(mainString) -1 , k=0; i >=0 ; i-- , ++k)
    {
        result[k] = mainString[i];
    }
    result[k] = '\0';
}
void multiplication(char *first,char *second, char *result, int x)
{
    int i,j,l=0,extra,multi,c;

    int firstLenth = strlen(first);
    int secLenth = strlen(second);
    int totalLength = firstLenth+secLenth;
    int total=0;
    int carry;
    char temp[MAX];
    for(int i=0;i<20;i++)
        temp[i] = '0';
    temp[20]='\0';
    for(int i=0;i<secLenth;i++)
    {
        carry = 0;
        total = i;
        for(int j=0;j<firstLenth;j++)
        {
            ++total;
            if (temp[i+j]=='\0')
            {
                temp[i+j] = '0';
                temp[i+j+1] = '\0';
            }
            int multi = (first[j]-'0')*(second[i]-'0')+carry+(temp[i+j]-'0');
            int mod = multi % 10;
            temp[j+i]= mod+'0';
            carry = multi / 10;
        }

        if (carry!=0)
        {
            temp[total++] = carry+'0';
        }

        temp[total] = '\0';
    }
    if(x==1)
        strcpy(result,temp);

    if(x==2)
    {
        reverseStirng(temp,result);
    }

}

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int nPlusOne=0;
        if (n%2==0)
        {
            nPlusOne = n+1;
            n/=2;
        }
        else
            nPlusOne = (n+1)/2;

        char nInString[100],nPlusOneInString[100],result[100];
        result[0]='\0';

        sprintf(nInString,"%d",n);
        reverseStirng(nInString,result);
        strcpy(nInString,result);

        sprintf(nPlusOneInString,"%d",nPlusOne);
        reverseStirng(nPlusOneInString,result);
        strcpy(nPlusOneInString,result);

        multiplication(nInString,nPlusOneInString,result,1);

        strcpy(nInString,result);
        strcpy(nPlusOneInString,result);
        result[0] = '\0';

        multiplication(nInString,nPlusOneInString,result,2);
        printf("%s\n",result);
    }
    return 0;
}
