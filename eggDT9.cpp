#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int n;

    cout << "n= ";
    cin >> n;
    int e = 0, u = n -1;
    int v[n];
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Add meg a szamokat: ";
        cin >> v[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            w[e] = v[i];
            e++;
        }
        else
        {
            w[u] = v[i];
            u--;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << w[i] << " ";
    }
}