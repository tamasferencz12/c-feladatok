//Készíts programot, amely bekér egy n természetes számot és megállapítja, hogy tökéletes szám-e vagy sem. Egy szám tökéletes, ha egyenlő a nála kisebb osztóinak összegével pl. a 6 tökéletes szám, mert 6=1+2+3

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   unsigned int szam, ossz = 0, i=1;

   cout << "Adj meg egy termeszetes szamot: ";
   cin >> szam;

   do{
     if(szam % i == 0){
         ossz = ossz + i;
     } 
      i++;
   }while (i >= 1 && i <= (szam/2));
   if (szam == ossz){
       cout << "Ez a szam tokeletes!" << endl;
   } else {
       cout << "Ez a szam nem tokeletes!" << endl;
   }

    return 0;
}