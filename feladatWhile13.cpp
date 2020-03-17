//Készíts programot, amely kiírja az n-nél kisebb prímszámokat.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    unsigned int szam, n, prim, j=2, oszto=2;

    cout << "Add meg az n-et: ";
    cin >> n;

   
    while(j >= 2 && j <= n){

      prim = true;

      while(oszto >= 2 && oszto <= sqrt(j)){
         if(j % oszto == 0){
             prim = false;
         }
         oszto++;
         }
     j++;
    }
    if (prim == true){
        cout << j << " ";
    }

    return 0;

}