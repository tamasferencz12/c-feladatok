#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int a, n, atlag, x = 0, y = 0;

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

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            x = x + v[i];
            y++;
        }
    }

    atlag = x / y;

    cout << "A paratlan szamok atlaga: " << atlag << endl;

    return 0;
}