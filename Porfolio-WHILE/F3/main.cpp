#include <iostream>

using namespace std;

int main()
{
    unsigned int szam,x=0;
    float atlag,parossz=0;

    while (szam != 0)
    {
        cout << "Adj meg egy termeszetes szamot: ";
        cin >> szam;
        if(szam % 2 == 0)
        {
            parossz=parossz + szam;
            x++;
        }
    }
    atlag = parossz/x;

    cout << "A paros szamok atlaganak= " << atlag << endl;

    return 0;
}
