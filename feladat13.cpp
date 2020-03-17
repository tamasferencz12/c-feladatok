#include <iostream>
#include <cmath>
using namespace std;

int main (){
    unsigned int szam, n, prim;

    cout << "Add meg az n-et: ";
    cin >> n;

    for (unsigned int j = 2; j <= n ;j++){
        prim = true;
        for (unsigned int oszto = 2; oszto <= sqrt(j); oszto ++){
            if(j % oszto ==0){
                prim = false;
            }
        }
        if (prim == true){
            cout << j << " ";
        }
    }
    return 0;
}