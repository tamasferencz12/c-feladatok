#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    unsigned int szam, x = 0;

    cout << "Adj be egy szamot: ";
    cin >> szam;

    ofstream file("szamjegy.out");
    while (szam != 0)
    {
        x++;
        szam /= 10;
    }
    file << x;

    file.close();

    return 0;
}