#include <iostream>

using namespace std;

int main()
{
    unsigned short n,r;
    bool ok=true;

    cout<< "Add meg a tomb meretet: ";
    cin>>n;

    int v[n];
    for (unsigned short i=0;i<n;i++)
    {
        cout <<"v[" << i << "]= ";
        cin >>v[i];
    }
    cout<<endl;

    r=v[1]-v[0];
    for (unsigned short i=0;i<n-1;i++)
        if (v[i+1]-v[i]!=r)
            {ok=false;
            break;}

    if (ok)
        cout <<"Szamtani sorozat."<<endl;
    else
        cout <<"Nem szamtani sorozat."<<endl;

        return 0;
}

