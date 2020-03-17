#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

#define n 5
#define m 5

using namespace std;

int main(){

    int a [n][m], i, j;

    bool szimetrikus = true;

    srand(time(NULL));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 100;
        }
    }
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if (a[i][j] != a[j][j]){
                szimetrikus = false;
                break;
           }
        }
    }

    if(szimetrikus == true){
        cout << "A negyzetes matrix szimetrikus!" << endl;
    } else {
        cout << "A negyzetes matrix nem szimetrikus!" << endl;
    }

    return 0;
}

