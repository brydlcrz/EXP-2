#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int begin;
	for(begin=1; begin<=30; begin++)
	{
		if(begin<=10)
		{
		cout<<begin<<",";
		continue;
		}
		cout<<++begin<<",";
	}
	cout<<++begin;
	getch();
	return 0;
}
