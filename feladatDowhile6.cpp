//Készíts programot, amely bekér egy a és egy b természetes számot és eldönti, hogy barátságos számok-e vagy sem. Két szám barátságos, ha az egyik önmagánál kisebb osztóinak összege egyenlő a másik számmal és fordítva. pl. 220 és 284.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    unsigned int a, b, ossz1=1, ossz2=1, i;

    cout << "Adj be ket szamot: ";
    cin >> a >> b;

    do{
      if (a % i == 0){
          ossz1= ossz1 + i;
      }
    }while(i >=1 && i <=(a/2));
    do{
        if(b % i == 0){
            ossz2 = ossz2 + i;
        }
    }while(i >= 1 && i <=(b/2));

    if(a == ossz2 && b == ossz1){
        cout << "Ezek a szamok baratsagosak!" << endl;
    } else {
        cout << "Ezek a szamok nem baratsagosak!" << endl;
    }

    return 0;
}