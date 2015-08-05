#include<stdio.h>
int main()
{
    int i,x,j;
    char str[1001];
    while(gets(str))
    {
		int value[2][26]={0};
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
            x=str[i]-65;
            ++value[0][x];
            }
            else if(str[i]>='a'&&str[i]<='z')
            {
            x=str[i]-97;
            ++value[1][x];
            }
        }
        int max=0;
		max=value[0][0];
		for(i=0;i<=1;i++)
		for(j=0;j<26;j++)
		if(max<=value[i][j])
		max=value[i][j];

		for(i=0;i<=1;i++)
		{
			for(j=0;j<26;j++)
			{
				if(value[i][j]==max)
				{
					if(i==0)
					printf("%c",65+j);
					else
					printf("%c",97+j);
				}
			}
		}
		printf(" %d\n",max);
    }
    return 0;
}
