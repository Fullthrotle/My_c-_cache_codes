#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double n;
  double i;
  double x = 0;
  double y = 1;
  double z ;
string call = " fibonacci of nth order : ";
   cin >> n;

   for ( i = 0 ; i <n ; i++ )
   {
      if ( i >0 )
         z = i;
      else
      {
         z= x+y;
         x = y;
         y = z;
      }
      cout<< call << z<< endl;
   }

   return 0;
}