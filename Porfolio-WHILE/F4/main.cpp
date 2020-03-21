#include <iostream>
#include <cmath>

using namespace std;

bool prim(int szam)
{
    if (szam == 0)
    {
        return false;
    }

    int n = szam;
    if (szam < 0)
    {
        n = -1 * szam;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return szam > 0 ?true : false;
}

int main()
{
    int szam, x = 0;

    while (szam != 0)
    {
        cout << "Adj meg egy termeszetes szamot: ";
        cin >> szam;

        if (szam > 0 && prim(szam))
        {
            cout << szam << " prim" << endl;
            x++;
        }
    }

    cout << "Primaszamok szama: " << x << endl;

    return 0;
}
