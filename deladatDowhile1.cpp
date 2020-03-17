//Készíts programot, amely kiszámítja az n-nél kisebb természetes számok összegét.

#include <iostream>

using namespace std;

int main()
{
   unsigned int n, i=1,ossz=0;

   cout << "Add meg az n-et: ";
   cin >> n;

   do{

     ossz+=i;
     i++;

   }while(i <= n);

   cout << ossz << endl;

   return 0;
}