#include<stdio.h>
#include<string.h>

int main()
{
    int totalTestCase,testCaseRunning=1;
    scanf("%d",&totalTestCase);
    while(testCaseRunning <= totalTestCase)
    {
        char stringToBeTaken[110];
        gets(stringToBeTaken);
        getchar();
        int i=0, keyPressed=0;
        for(i=0;i<strlen(stringToBeTaken) ; i++)
        {
            switch(stringToBeTaken[i])
            {
                case 'a':
                keyPressed+=1;
                break;
                case 'b':
                keyPressed+=2;
                break;
                case 'c':
                keyPressed+=3;
                break;
                case 'd':
                keyPressed+=1;
                break;
                case 'e':
                keyPressed+=2;
                break;
                case 'f':
                keyPressed+=3;
                break;
                case 'g':
                keyPressed+=1;
                break;
                case 'h':
                keyPressed+=2;
                break;
                case 'i':
                keyPressed+=3;
                break;
                case 'j':
                keyPressed+=1;
                break;
                case 'k':
                keyPressed+=2;
                break;
                case 'l':
                keyPressed+=3;
                break;
                case 'm':
                keyPressed+=1;
                break;
                case 'n':
                keyPressed+=2;
                break;
                case 'o':
                keyPressed+=3;
                break;
                case 'p':
                keyPressed+=1;
                break;
                case 'q':
                keyPressed+=2;
                break;
                case 'r':
                keyPressed+=3;
                break;
                case 's':
                keyPressed+=4;
                break;
                case 't':
                keyPressed+=1;
                break;
                case 'u':
                keyPressed+=2;
                break;
                case 'v':
                keyPressed+=3;
                break;
                case 'w':
                keyPressed+=1;
                break;
                case 'x':
                keyPressed+=2;
                break;
                case 'y':
                keyPressed+=3;
                break;
                case 'z':
                keyPressed+=4;
                break;
                case ' ':
                keyPressed+=1;
                break;
            }

        }
        printf("Case #%d: %d\n",testCaseRunning,keyPressed);
        testCaseRunning++;
    }
    return 0;
}
