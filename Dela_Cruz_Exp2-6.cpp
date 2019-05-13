#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a = 1, sum;

while(a = 1)
	{
	cout<<"Enter your number: "; cin>>a;
	if(a>0)
		{
		sum = (a*(a+1))/2;
		cout<<"The total of all numbers from 1 to "<<a<<" is "<<sum<<".\n";	
		}
	else
		{
		cout<<"Thank you & God bless!\n";	
		break;	
		}
	}

getch();
return 0;
}
