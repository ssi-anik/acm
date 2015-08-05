#include<stdio.h>
#include<string.h>

int gcd (int a, int b){
    int rem;
    if (b == 0)
        return a;
    while (1){
        rem = a % b;
        if (rem == 0)
        break;
        a = b;
        b = rem;
    }
    return b;
}

int main(){
    freopen("D:\\input.txt","r",stdin);
    int testCaseRunning = 1, totalTestCases;
    scanf("%d\n",&totalTestCases);
    while(testCaseRunning++<=totalTestCases){
        char str[601];
        gets(str);
        int i = 0 ;
        int countM,countA,countR,countG,countI,countT;
        countA = countM = countR = countG = countI = countT = 0 ;
        for(i = 0 ; i < strlen(str) ; ++i){
            switch(str[i]){
                case 'M':
                    ++countM;
                    break;
                case 'A':
                    ++countA;
                    break;
                case 'R':
                    ++countR;
                    break;
                case 'G':
                    ++countG;
                    break;
                case 'I':
                    ++countI;
                    break;
                case 'T':
                    ++countT;
                    break;
            }
        }
        countA /= 3;
        countR /= 3;
        int pizza = gcd(gcd(gcd(gcd(gcd(countM,countA),countR),countG),countI),countT);
        printf("%d\n",pizza);
    }
    return 0;
}
