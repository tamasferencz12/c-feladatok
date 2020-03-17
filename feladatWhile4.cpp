//Készíts programot, amely bekér egy n természetes számot és eldönti, hogy prímszám-e vagy sem.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   unsigned int szam, prim, n, oszto;
  

   cout << "Adj be egy szamot: ";
   cin >> szam;
   
   prim = true; 

  while(oszto >= 2 && oszto <= sqrt(szam)){
      if (szam % oszto == 0){
          prim = false;
      }
  }
  
  if (prim == true){
      cout << "A szam prim!" << endl;
  } else {
      cout << "A szam nem prim!" << endl;
  }
  
    return 0;
}