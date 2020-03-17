//Készíts programot, amely kiszámítja a következő kifejezést:
//S=1+3+5+…+(2n-1)

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   int n, s=0,i=1;

   cout << "Add meg az n-t: ";
   cin >> n;

   while(i >= 1 && i <= (2*n-1)){
       s+= i;
       i+=2;
   }

   cout << "S= " << s << endl;

    return 0;
}