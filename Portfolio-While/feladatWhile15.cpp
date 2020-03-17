//Készíts programot, amely kiírja az n-nél kisebb tökéletes számokat.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    unsigned int szam, ossz = 0, n, i=1, j=1 ;
    
    cout << "Add meg az n-et: ";
    cin >> n;

    while(j >=1 && j<= n){
       while(i >= 1 && i <= (j/2)){
           if(j % i == 0){
               ossz = ossz + i;
           }
           i++;
       }
      if(j == ossz){
          cout << j << " ";
      }
      j++;
    }

    return 0;
}