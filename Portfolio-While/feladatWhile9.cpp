//Készíts programot, amely bekéri n tanulónak a testmagasságát centiméterben és kiírja, hogy a legnagyobb és a legkisebb tanuló magassága között hány centi a különbség.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   float magassag, magMax, magMin;
   unsigned int n, i=1;

   cout << "Add meg a tanulok szamat: ";
   cin >> n;
   cout << "Adj be egy tanulo magassagat CM-ben: ";
   cin >> magassag;   

   magMax = magassag;
   magMin = magassag;

   while(i >= 1 && i <= (n-1)){
       cout << "Adj be egy tanulo magassagat CM-ben: ";
       cin >> magassag;
       if (magassag > magMax){
           magMax = magassag;
       } else {
           magMin = magassag;
       }
       i++;
   }
   cout << "A legnagyobb es legkisebb tanulok kozott " << magMax-magMin << "-cm van!" << endl;






    return 0;
}