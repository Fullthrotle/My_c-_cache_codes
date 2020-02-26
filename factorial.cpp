/*#include<iostream>

using namespace std;


int main ()
{

int x;
cin >> x;
int total = 1;
for ( int i = 1; i <=x; i++) {

    total = total*i;
}
cout << total ;

 return 0;

}*/

#include <iostream>
using namespace std;

int factNum( int x, int y)

{
    int result;
for ( int i =1; i <= x; i++)
{

y = y*i;
}
return y;
}
int main(){

cout << factNum(7,1);
    return 0;
}