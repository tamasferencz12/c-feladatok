#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    bool igaz = true;
    int t, n, s;

    cout << "n= ";
    cin >> n;
    int v[n+1];
    srand(time(NULL));
    cout << "Ezek a szamok: ";
    for (int i = 1; i <= n; i++)
    {
        v[i] = rand() % 100;
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 1; i <= n-1;i++){
        if (v[i] > v[i + 1]){
            igaz = false;
            break;
        }
    }
    if (igaz){
        cout << "Novekvo sorrendben vannak!" << endl;
    } else {
        cout << "Nincsenek novekvo sorrendbe!" << endl;
    }
    
    if (n == 1){
        cout << "Anyadat! Adj be tobb szamot teeee!!!" << endl;
    }
    
 

    return 0;
}