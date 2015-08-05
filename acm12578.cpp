#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	const double pi = acos(-1);
	double height,width,radius;
	int testCaseRunning = 1 , totalTestCase;
	cin>> totalTestCase;
	while (testCaseRunning++<=totalTestCase)
	{
		double radiusOfRact = 0,
			radiusOfCirc = 0;
		cin >> height ;
		width = (height * 6 ) / 10 ;
		radius = (height ) / 5;
		radiusOfCirc = (pi * radius * radius ) ;
		radiusOfRact = ( height * width ) ;
		printf("%.2lf %.2lf\n",radiusOfCirc,(radiusOfRact - radiusOfCirc ) ) ;
	}
	return 0;
}
