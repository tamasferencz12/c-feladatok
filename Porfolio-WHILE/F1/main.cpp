#include <iostream>

using namespace std;

int main()
{
    unsigned int szam, legnsz, legksz, szamj;

    cout << "Adj meg egy tobbjegyu termeszetetes szamot: ";
    cin >> szam;

    legksz = 9;
    legnsz = 0;

    while(szam != 0)
    {
        szamj = szam % 10;
        if (szamj > legnsz)
        {
            legnsz = szamj;
        }
        if (szamj < legksz)
        {
            legksz = szamj;
        }
        szam /=10;
    }

    cout << "A legnagyobb szamjegy es a lekisseb szamjegy kulombsege= " << legnsz-legksz << endl;

    return 0;
}
