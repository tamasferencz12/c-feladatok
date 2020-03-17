#include <iostream>

using namespace std;

int main()
{

    float a, b, c;

    cout << "Adj meg harom valos szamot: ";
    cin >> a >> b >> c;

    if ( a < b + c && b < a + c && c < a + b ){
        cout << "Lehetnek a haromszog oldalai!" << endl;
    } else {
        cout << "Nem lehetnek a haromszog oldalai!" << endl;
    }
    return 0;
}
