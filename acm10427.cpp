#include <stdio.h>
int n,sum,num,base,len,i,j,start;
int main()
{
	while(scanf("%d",&n)==1)
	{
		sum=0;num=0;base=9;len=1;
		while(true)
		{
			if(sum+base*len>=n) break;
			sum+=base*len;
			base*=10;
			len++;
		}
		for(i=len,base/=9;i>=1;i--,base/=10)
		{
			start=(i==len) ? 1 : 0 ;
			for(j=start;j<10;j++)
			{
				sum+=len*base;
				if(i==1&&sum>n)
				{
					sum-=len*base;
					num+=(base*j);
					goto end;
				}
				if(sum==n)
				{
					num+=base*j;
					if(i!=1) num-=1;
					goto end;
				}
				if(sum>n)
				{
					sum-=len*base;
					break;
				}
			}
			num+=base*j;
		}
end:
		if(sum==n) printf("%d\n",num%10);
		else
		{
			int d=n-sum,ptr=0;
			char temp[350];
			while(num)
			{
				temp[ptr++]=num%10;
				num/=10;
			}
			printf("%d\n",temp[ptr-d]);
		}

	}
}
