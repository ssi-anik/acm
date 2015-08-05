#include<iostream>

using namespace std;

int main()
{
    long long int testCaseRunning=1,totalTestCase;
    double income,rate;
	cin>>totalTestCase;
	long long int final;

    while(testCaseRunning<=totalTestCase)
    {
        cin>>income;

		if(income<=180000.0)
			rate=0.0;

		else if(income>180000.0&&income<=480000.0)
			rate=(income-180000.0)*0.1;

		else if(income>480000.0&&income<=880000.0)
			rate=((income-480000.0)*0.15)+30000.0;

		else if(income>880000.0&&income<=1180000.0)
			rate=((income-880000.0)*0.2)+90000.0;

		else if(income>1180000)
			rate=((income-1180000.0)*0.25)+150000.0;


		if(rate>0.0&&rate<2000.0)
			rate=2000.0;

		final=static_cast<long long int>(rate);

		if(final<rate)
		final++;
			cout<<"Case "<<testCaseRunning++<<": "<<final<<'\n';

	}

    return 0;
}
