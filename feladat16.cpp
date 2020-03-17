//Készíts programot, amely kiírja az n-nél kisebb barátságos számokat.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   unsigned short n, osszi=0,osszj=0;
   cin >> n;

   for(int i=1;i<=n;i++){
       for(int j = i+1;j<=n;j++){
           osszi=0,osszj=0;
           for(int k=1;k<=i/2;k++){
               if(i%k==0){
                   osszi+=k;
               }
           }
           for(int k=1;k<=j/2;k++){
               if(j%k==0){
                   osszj+=k;
               }
           }
           if(i==osszj && j==osszi){
               cout << "(" << i << "," << j << ")" << endl;
           }
       }   
   }

    return 0;
}