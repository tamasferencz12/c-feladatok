#include <iostream>

using namespace std;

int main()
{
    int n;
    float a, ossz = 0, fel = 0;

    cout << "Add meg az osztaly letszamat: ";
    cin >> n;
    float v[n];

    for (unsigned short i = 1; i <= n; i++)
    {
        cout << "Add meg egy tanulo evvegi atlagat: ";
        cin >> a;

        v[i] = a;
        ossz += a;
    }

    a = ossz / n;
    cout << "az osztaly atlaga:" << a << endl;

    for (unsigned short i = 1; i <= n; i++)
    {
        if (v[i] > a)
            fel += 1;
    }

    cout << "ennyi tanulonak nagyobb az atlaga az osztalyatlagnal: " << fel;
}
