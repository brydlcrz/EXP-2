#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
   cout<<"First 20 fibonacci numbers are...\n";
   int limit, f1 = 0, f2 = 1, f3;
   for (limit = 0 ; limit <22; limit++)
   {
      if ( limit <= 1 )
         f3 = limit;
      else
      {
         f3 = f1 + f2;
         f1 = f2;
         f2 = f3;
      }
      cout << f3<<",";
   }
    getch();
    return 0;
}