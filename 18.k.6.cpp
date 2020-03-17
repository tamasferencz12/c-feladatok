#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define n 5
#define m 5

using namespace std;

int main()
{

    unsigned int maximum = 0, legni1, legni2;
    int a[n][m];

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
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > maximum)
            {
                maximum = a[i][j];
                legni1 = i;
                legni2 = j;
            }
            
        } 
    }

    cout << "A matrixba a legnagyobb szam : " << maximum  << ", indexuk: " << legni1 << "," << legni2 << endl;

    return 0;
}