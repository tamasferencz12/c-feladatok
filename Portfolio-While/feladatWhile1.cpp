//Készíts programot, amely kiszámítja az n-nél kisebb természetes számok összegét.

#include <iostream>

using namespace std;

int osszeg (int szam)
{
    int i=1, ossz=0;
    while (i <= szam)
    {
        ossz += i;
        i++;
    }
    return ossz;
}

int main()
{
    unsigned int n, i = 1, ossz = 0;

    cout << "Add meg az n-et: ";
    cin >> n;
    cout << osszeg(n) << endl;

    return 0;
}
