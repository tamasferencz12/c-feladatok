#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short n,r;
    bool igaz=true;

    int v[n];

    while(v[n] != 0){

        cout << "Adj meg egy tagot: ";
        cin >> v[n];
    }
    cout << endl;

    r=abs(v[n+1]-v[n]);

    for (unsigned short i=0; i< n-1; i++)
        if (v[i+1]-v[i]!=r)
        {
            igaz=false;
            break;
        }

    if (igaz)
    {
        cout << "Szamtani sorozat!" <<endl;
    }
    else
    {
        cout << "Nem szamtani sorozat!" <<endl;
    }

    return 0;
}

