#include <iostream>

using namespace std;

int main()
{
    unsigned int szam;
    float c, x = 0, y = 0;

    while (szam != 0)
    {
        cout << "Adj be egy termeszetes szamot: ";
        cin >> szam;
        if (szam > 0)
        {
            y++;
            if (szam % 2 != 0)
            {
                x++;
            }
        }
    }

    cout << y << " " << x << endl;
    c = (x * 100) / y;

    cout << "A beolvasott szamok paratlan szamainak szazaleka: " << c << "%" << endl;

    return 0;
}
