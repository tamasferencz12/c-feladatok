#include <iostream>
#include <iomanip>
#include <cmath>

#define n 2
#define m 3

using namespace std;

int main(){

    int a[n][m],x=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=pow(2,x);
            x++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}