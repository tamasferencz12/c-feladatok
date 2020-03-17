//Készíts programot, amely meghatározza a Fibonacci sorozat n-dik elemét.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
  unsigned int n;
  unsigned long long sz1 = 1, sz2 = 1, sz3;
  unsigned short i = 3;

  cout << "Add meg, hogy hanyadik elemet szeretned megkapni: ";
  cin >> n;

  while(i >= 3 && i <= n){
     sz3 = sz1 + sz2;
     sz1 = sz2;
     sz2 = sz3;
    i++;
  }
   
   cout << "Az " << n << "-ik fibonacci szam: " << sz3 << endl;

    return 0;
}