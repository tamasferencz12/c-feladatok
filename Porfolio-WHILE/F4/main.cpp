#include <iostream>
#include <cmath>

using namespace std;

bool prim(int szam)
{
    int n = szam;
    if (szam < 0)
    {
        n = -1 * szam;
    }

    for (int i = 2; i <= sqrt(szam); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int szam, x=0;

    while(szam != 0){
        cout << "Adj meg egy termeszetes szamot: ";
        cin >> szam;

        if (prim(szam)){
            x++;
        }
    }
    cout << "Primaszamok szama: " << x << endl;

    return 0;
}