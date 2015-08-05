#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int testCaseRunning=1,totalTestCase;
    scanf("%d",&totalTestCase);
    while(testCaseRunning<=totalTestCase)
    {
        long presentDate,presentMonth,presentYear,birthDate,birthMonth,birthYear;
        scanf("%ld/%ld/%ld\n%ld/%ld/%ld\n\n",&presentDate,&presentMonth,&presentYear,&birthDate,&birthMonth,&birthYear);
        printf("Case #%d: ",testCaseRunning++);
		if((presentMonth>12 || birthMonth >12)||(presentYear<birthYear) || (presentYear==birthYear && presentMonth<birthMonth) || (presentYear == birthYear && presentMonth==birthMonth && presentDate<birthDate))
			printf("Invalid birth date\n");
		else
		{
			int finalYear,finalDate,finalMonth;
			finalYear=finalDate=finalMonth=0;
			finalYear = presentYear - birthYear;
			finalMonth = presentMonth - birthMonth;
			finalDate = presentDate - birthDate;
			if(finalDate<0)
				--finalMonth;
			if(finalMonth<0)
				--finalYear;
			if(finalYear>130)
			{
				printf("Check birth date\n");
				continue;
			}
			else
				printf("%d\n",finalYear);
		}
    }
    return 0;
}

