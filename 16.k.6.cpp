#include <iostream>
#include <fstream>

using namespace std;

bool hasParam(int argc, char *argv[], string param)
{
    for (unsigned int i = 0; i < argc; i++)
    {
        if (argv[i] == param)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[])
{
    unsigned short n, szam1, szam2, lnko = 0, s;

    bool debug = hasParam(argc, argv, "-d");

    ifstream file1;
    ofstream file2;

    file1.open("lnko.in");
    file2.open("lnko.out");

    file1 >> n;
    if (debug)
    {
        cout << "Parok szama: " << n << endl;
    }

    for (unsigned short i = 1; i <= n; i++)
    {
        file1 >> szam1 >> szam2;
        if (szam1 > szam2)
        {
            s = szam2;
            szam2 = szam1;
            szam1 = s;
        }

        if (debug)
        {
            cout << "Par " << i << ": " << szam1 << " " << szam2 << endl;
        }

        for (unsigned short j = 1; j <= szam2; j++)
        {
            if (szam1 % j == 0 && szam2 % j == 0)
            {
                lnko = j;
            }
        }
        if (debug)
        {
            cout << "Lnko " << i << ": " << lnko << endl;
        }

        file2 << lnko << endl;
    }

    file1.close();
    file2.close();

    return 0;
}