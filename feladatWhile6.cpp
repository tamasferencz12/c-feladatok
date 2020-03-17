//Készíts programot, amely bekér egy a és egy b természetes számot és eldönti, hogy barátságos számok-e vagy sem. Két szám barátságos, ha az egyik önmagánál kisebb osztóinak összege egyenlő a másik számmal és fordítva. pl. 220 és 284.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int a, b, ossz1 = 0, ossz2 = 0, i = 1;

    cout << "Adj be ket szamot: ";
    cin >> a >> b;

    while (i <= (a / 2))
    {
        if (a % i == 0)
        {
            ossz1 = ossz1 + i;
        }
        i++;
    }
    i = 1;

    while (i <= (b / 2))
    {
        if (b % i == 0)
        {
            ossz2 = ossz2 + i;
        }
        i++;
    }

    if (a == ossz2 && b == ossz1)
    {
        cout << "Ezek a szamok baratsagosak!" << endl;
    }
    else
    {
        cout << "Ezek a szamok nem baratsagosak!" << endl;
    }

    return 0;
}