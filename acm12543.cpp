#include<stdio.h>
#include<string.h>
#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
    char word[110],maxWord[110],c;
    int i=0,max=0;
    memset(word,'\0',sizeof(char)*110);
    while(true)
    {
        c=getchar();
		if(!((c>='a' && c<='z') ||(c>='A' && c<='Z') || c=='-'))
        {
            i=0;
            memset(word,'\0',sizeof(char)*110);
            continue;
        }
        word[i++]=c;
        word[i]='\0';
        if(strcmp("E-N-D",word)==0)
            break;
        else if(max<strlen(word))
        {
            strcpy(maxWord,word);
            max=strlen(word);
        }
    }
    for(i=0;i<strlen(maxWord);i++)
        cout<<(char)tolower(maxWord[i]);
    cout<<endl;
    return 0;
}
