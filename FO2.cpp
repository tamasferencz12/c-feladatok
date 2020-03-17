#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

    unsigned int n, m;
    

    ifstream file1;

    file1.open("fadema.in");

    file1 >> n >> m;

    int a[n][m];

    for (unsigned int i = 0; i < n; i++)
    {
        for (unsigned int j = 0; j < m; j++)
        {
            file1 >> a[i][j];
        }
    }
    cout << endl;

    for (unsigned int i = 0; i < n; i++)
    {
        for (unsigned int j = 0; j < m; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    file1.close();


    return 0;
}