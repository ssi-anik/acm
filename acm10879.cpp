#include <stdio.h>
int main()
{
    freopen("D:\\acmin.txt","r",stdin);
	int i,n,c,top,j;
	int res[2];
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		scanf("%d",&n);
		top = 0;
		for(j=2;top<2&&j*j<=n;j++)
			if(n%j==0)
                if(top!=4)
                    res[top++] = j;
				else
                    break;
		printf("Case #%d: %d = %d * %d = %d * %d\n",i,n,res[0],n/res[0],res[1],n/res[1]);
	}
	return 0;
}


/*
acc at : 246

#include<stdio.h>
#include<math.h>

int main()
{
    long long testCaseRunning=1,totalTestCase,X;
    scanf("%lld",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        long long i=0;
        scanf("%lld",&X);
        for(i=2;i*i<=X;i++)
            if(X%i==0)
                break;

        long long A = i;
        long long B = X/A;
        long long j;
        for(j=2;j*j<=X ;j++)
            if(j==A || j==B)
                continue;
            else if(X%j==0)
                break;
        long long C = j;
        long long D = X/C;
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",testCaseRunning++,X,A,B,C,D);
    }
    return 0;
}
