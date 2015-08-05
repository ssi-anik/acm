#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c,x;
    while((x =getchar())!=EOF)
    {
		c = tolower( x );
        if(c=='\n')
        {
            printf("\n");
            continue;
        }
        if(c=='a'||c=='b'||c=='c')
        printf("2");
        else if(c=='d'||c=='e'||c=='f')
        printf("3");
        else if(c=='g'||c=='h'||c=='i')
        printf("4");
        else if(c=='j'||c=='k'||c=='l')
        printf("5");
        else if(c=='m'||c=='n'||c=='o')
        printf("6");
        else if(c=='p'||c=='q'||c=='r'||c=='s')
        printf("7");
        else if(c=='t'||c=='u'||c=='v')
        printf("8");
        else if(c=='w'||c=='x'||c=='y'||c=='z')
        printf("9");
        else
        printf("%c",c);
    }
    return 0;
}
