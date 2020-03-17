#include <iostream>

using namespace std;

int main()
{

    unsigned int ev;

    cout << "Adj be egy evszamot: ";
    cin >> ev;

    if ((ev % 4 == 0) && ((ev % 100 != 0) || (ev % 400 == 0)))
    {

        cout << "Ez az ev szokoev!" << endl;
    }
    else
    {
        cout << "Nem szokoev!" << endl;
    }

    return 0;
}
