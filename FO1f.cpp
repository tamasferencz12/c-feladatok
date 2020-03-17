#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

unsigned int szamkpo(unsigned int szam, unsigned int k)
{
    int db = 0;
    bool prim;

    for (int i = 2; i <= (szam / 2); i++)
    {
        if (i == 2 && szam % i == 0)
        {
            db++;
        }
        else if (szam % i == 0 && i % 2 != 0)
        {
            prim = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    prim = false;
                    break;
                }
            }
            if (prim)
            {
                db++;
            }
        }
        if (db == k)
        {
            return i;
        }
    }

    return 0;
}

int main()
{

    unsigned int p, n, szam, k, oszto, db = 0, z = 0;
    bool prim;

    ifstream file1;
    ofstream file2;

    file1.open("cufar.in");
    file2.open("cufar.out");

    file1 >> p;
    file1 >> n;

    if (p == 1)
    {
        file1 >> szam;
        file1 >> k;
        file2 << szamkpo(szam, k);
    }

    if (p == 2)
    {
        for (int o = 0; o < n; o++)
        {
            file1 >> szam;
            file1 >> k;
            z = z + szamkpo(szam, k);
        }
        file2 << z;
    }

    file1.close();
    file2.close();

    return 0;
}