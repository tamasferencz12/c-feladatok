#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Adj be 3 valos szamot: ";
    cin >> a >> b >> c;

    if (a > c && a > b)
    {
        cout << "Az " << a << " a legnagyobb!";
    }
    if ( c > a && c > b)
    {
        cout << "A " << c << " a legnagyobb!";
    }
    if (b > a && b > c)
    {
        cout << "A " << b << " a legnagyobb!";
    }

    return 0;
}
