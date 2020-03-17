#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    unsigned int a, b, c;

    cout << "Adj meg 3 termszetes szamot: ";
    cin >> a >> b >> c;

    if (pow(a,2)== pow(b,2)+ pow(c,2) || pow(b,2)== pow(a,2)+ pow(c,2) || pow(c,2)== pow(a,2)+ pow(b,2))
    {

        cout << "Pitagoraszi szamok!" << endl;
    }
    else
    {
        cout << "Nem pitagoraszi szamok!" << endl;
    }


    return 0;
}
