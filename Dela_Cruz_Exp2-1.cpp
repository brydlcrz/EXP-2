#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	char package;
	int hrs, total;
	int packAPrice = 995, packBPrice = 1495, packCPrice = 1995; 

	cout<<"Choose package - \n";
	cout<<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout<<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";	
	cout<<"Package C: For P1995/mo of unlimited access is provided.\t\n";
	cin>>package;

	cout<<"The number of hours of using internet access- "; cin>>hrs;

	switch(package)
	{
	case 'a':
	case 'A':
	if(hrs>10)
		{
        	total= (hrs-10)*20;   
		cout<<"Total Amount due - "<<packAPrice+(20*(hrs-10));
	}
	else
		cout<<"Total amount due: P995";
		break;
	case 'b':
	case 'B':
		if(hrs>20){
        	total= (hrs-20)*10;
		cout<<"Total Amount due - "<<packBPrice+(10*(hrs-20));
		}
		else
		cout<<"Total amount due: P1495";
		break;
	case 'c':
	case 'C':
		cout<<"Total Amount due - "<<packCPrice;
		break;
	default:
		cout<<"Invalid package!";
	}

	getch();
	return 0;
}