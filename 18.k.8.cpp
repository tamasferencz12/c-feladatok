#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

#define n 5
#define m 5

using namespace std;

int main(){

    int a [n][m], k;

    cout << "Add meg a k-t: ";
    cin >> k;

    srand(time(NULL));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 100;
        }
    }
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=(k+1);j<m;j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
  
    return 0;
}