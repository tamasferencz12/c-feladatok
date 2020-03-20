#include <iostream>

using namespace std;

int main()
{
    unsigned int szam, parossz=0,x=0;
    float atlag;

    while (szam != 0)
    {
        cout << "Adj meg egy termeszetes szamot: ";
        cin >> szam;
        if(szam % 2 == 0)
        {
            parossz=parossz + szam;
            x++;
        }
        szam /= 10;
    }

    atlag = parossz/x;

    cout << "A paros szamok atlaganak egesz resze= " << atlag << endl;

    return 0;
}
