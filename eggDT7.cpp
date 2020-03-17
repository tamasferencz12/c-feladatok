#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    bool igaz = true;
    int a, n, r;

    cout << "n= ";
    cin >> n;
    int v[n];
    srand(time(NULL));
    cout << "Ezek a szamok: ";
    for (int i = 0; i < n; i++)
    {

        v[i] = rand() % 100;
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i = 1; i < n-1;i++){
        if(v[i + 1] - v[i] != r){
            igaz = false;
            break;
        }
    }
    if (igaz){
        cout << "Szamtani sorozat!" << endl;
    } else {
        cout << "Nem szamtani sorozat!" << endl;
    }





}