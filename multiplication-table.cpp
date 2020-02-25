#include <iostream>
#include <cmath>
using namespace std;

int pow(int x)
{
   int result;

   for ( int i =1; i<=10; i++ ) {

    cout << x*i <<endl;
   }

   return result;

}


int main ()
{

cout << pow(3);

    return 0;

}