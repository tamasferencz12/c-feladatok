//Készíts programot, amely kiírja az n-nél kisebb barátságos számokat.

#include <iostream>
#include <cmath>
using namespace std;

bool baratsagos(unsigned int a, unsigned int b)
{
    unsigned int ossz1 = 0, ossz2 = 0, i = 1;
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
        return true;
    }

    return false;
}

int main()
{
    unsigned int n;
    cout << "Add be az n-et: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (baratsagos(i, j))
            {
                cout << i << " es " << j << " baratsagos" << endl;
            }
        }
    }
}