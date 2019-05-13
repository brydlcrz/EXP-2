#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int n = 1, sum;

while(n = 1)
	{
	cout<<"Enter your number: "; cin>>n;

	if(n>0)
		{
		sum = (n*(n+1))/2;
		cout<<"The total of all numbers from 1 to "<<n<<" is "<<sum<<".\n";	}

	else
		{
		cout<<"Thank you!\n";	
		break;	 }
	}

getch();
return 0;
}