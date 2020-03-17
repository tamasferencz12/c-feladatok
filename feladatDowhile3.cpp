//Készíts programot, amely bekér egy n természetes számot és kiírja képernyőre a valódi osztóit.

#include <iostream>

using namespace std;

int main()
{
    unsigned int x, oszto=2;

    cout << "Adj be egy szamot: ";
    cin >> x;

    do{
        if(x % oszto == 0 ){
            cout << oszto << " " ;
        }
        oszto++;
    }while (oszto <= (x/2));

    return 0;
}