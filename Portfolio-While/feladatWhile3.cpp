//Készíts programot, amely bekér egy n természetes számot és kiírja képernyőre a valódi osztóit.

#include <iostream>

using namespace std;

int main()
{
    unsigned int x, oszto=2;

    cout << "Adj be egy szamot: ";
    cin >> x;

    while(oszto <= (x/2)){
        if(x % oszto == 0 ){
            cout << oszto << " " ;
        }
        oszto++;
    }

    return 0;
}