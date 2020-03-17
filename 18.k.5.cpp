#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define n 5
#define m 5

using namespace std;

int main()
{

    int a[n][m], k, minimum = 100;

    cout << "Valaszd ki, hogy melyik sor legkisebb elemet szeretned megkapni: ";
    cin >> k;

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 100;
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[k][i] < minimum)
        {
            minimum = a[k][i];
        }
    }

    cout << "A k. oszlop legkisebb eleme: " << minimum << endl;

    return 0;
}
