//Készíts programot, amely bekér egy n természetes számot és kiszámítja az n! értékét.

#include <iostream>

using namespace std;

int main()
{
   unsigned int n, i=1,szorzat=1;

   cout << "Add meg az n-et: ";
   cin >> n;

   do{

     szorzat=szorzat * i;
     i++;

   }while(i <= n);

cout << szorzat << endl;

    return 0;
}