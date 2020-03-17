//Készíts programot, amely bekéri n tanulónak az életkorát és kiírja, hogy hányan töltötték be a 18 évet és hányan nem.
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   unsigned int tanulokSzama, eletkor, felnottTanulokSzama = 0, gyerekek = 0,i=1;

   cout << "Add meg a tanulok szamat: ";
   cin >> tanulokSzama;

   while(i >= 1 && i <= tanulokSzama){
      cin >> eletkor;
      if(eletkor >= 18){
          felnottTanulokSzama = felnottTanulokSzama + 1;
      } else {
          gyerekek = gyerekek + 1;
      }
      i++;
   }
   
   cout << felnottTanulokSzama << endl;
   cout << gyerekek << endl;

    return 0;
}