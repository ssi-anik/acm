#include<iostream>
#include<math.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

bool divideByNumbers(int numbers, char *strings)
{
	if(numbers == 3)
	{
		long sum=0;
		for (int i = 0; i < strlen(strings) ; i++)
		{
			sum+=strings[i] - '0';
		}
		if(sum%3==0)
			return 1;
		else
			return 0;
	}

	else if (numbers == 4)
	{
		unsigned sum = (strings[strlen(strings)-1] - '0') + ( ( strings[strlen(strings) - 2] - '0') * 10);
		if(sum%4 == 0 )
			return 1;
		else
			return 0;
	}

	else if (numbers == 5 )
	{
		if(strings[strlen(strings)-1] == '5' || strings[strlen(strings)-1] == '0')
			return 1;
		else
			return 0;
	}

	else if (numbers == 11)
	{
		long oddSum=0, evenSum=0;
		for (int i = 0; i < strlen(strings) ; i++)
		{
			if (i%2==0)
			{
				evenSum+= strings[i] - '0';
			}
			else
			{
				oddSum+=strings[i] - '0';
			}
		}
		if( (evenSum - oddSum)%11 == 0 )
			return 1;
		else
			return 0;
	}

	else if (numbers == 100 )
	{
		if( strings[strlen(strings) - 1] == '0' && strings[strlen(strings) - 2] == '0')
			if(strlen(strings)>=3 || strings[strlen(strings) - 2] - '0' >=1 )
				return 1;
			else
			{
				return 0;
			}
		else
			return 0;
	}

	else if (numbers == 400)
	{
		int now ;
		long extra;
		int len = strlen(strings);
		for(now=0,extra=0; now < len ; now++)
		{
		    extra = extra*10 + (strings[now] - '0');
		    extra%=numbers;
		}
		if(extra==0)
			return 1;
		else
			return 0;
	}


}
int main()
{
	char *inputYear;
	inputYear = (char*) malloc(100000 * sizeof(char));

    string leap = "This is leap year.\n";
    string hulu15 = "This is huluculu festival year.\n";
    string bulu55 = "This is bulukulu festival year.\n";
	string ordi = "This is an ordinary year.\n";
	int xtra=0,leapyr=0;
	while(cin>>inputYear)
    	{
		if(xtra!=0)
			printf("\n");
		xtra=0;
		leapyr = 0;
		bool divideBy3 = divideByNumbers(3, inputYear) ;
		bool divideBy4 = divideByNumbers(4, inputYear) ;
		bool divideBy5 = divideByNumbers(5, inputYear) ;
		bool divideBy11 = divideByNumbers(11, inputYear) ;
		bool divideBy100 = divideByNumbers(100, inputYear) ;
		bool divideBy400 = divideByNumbers(400, inputYear) ;
		if(divideBy4==1 && (divideBy100==0 || divideBy400 == 1))
		{
			cout<<leap;
			xtra=1;
			leapyr=1;
		}
		if(divideBy3 == 1 && divideBy5 == 1 )
		{
			xtra=1;
			cout<<hulu15;
		}
		if(divideBy11== 1 && divideBy5 == 1 && leapyr==1 )
		{
			cout<<bulu55;
			xtra=1;
		}
		if (xtra==0)
		{
			cout<<ordi;
		}
		xtra=1;

    	}
    return 0;
}
