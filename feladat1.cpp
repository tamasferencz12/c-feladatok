#include <iostream>

using namespace std;

int main()
{
    float a;
    cout << "Adj be egy szamot: ";
    cin >> a;

    if(a>0)
    {
        cout << "Pozitiv a szam!" << endl;
    }
    else
    {
        cout << "Nempzitiv szam!" << endl;
    }
    if (a == 0)
    {
        cout << "A szam nulla!" << endl;
    }


    return 0;
}
