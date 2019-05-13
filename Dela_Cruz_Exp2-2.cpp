#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double pastMonth, usedGallons;
	int wdemand = 35, lcharge = 20, gallprice = 1.1;
	cout<<"Enter gallons consumed from the last two months- ";cin>>usedGallons;
	cout<<"Enter past month bill- "; cin>>pastMonth;

	cout<<setprecision(2)<<fixed;
	if(pastMonth==0)
		cout<<"Total Cost - "<<wdemand+(1.1*usedGallons);
	else
		cout<<"Total Cost - "<<lcharge+wdemand+pastMonth+((gallprice*usedGallons));

	getch();
	return 0;
}
