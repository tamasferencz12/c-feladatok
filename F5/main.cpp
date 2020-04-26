#include <iostream>
#include <cmath>

using namespace std;

float xyz (double sqrt(szam){

    double egeszR, maradek;
    maradek = modf(szam, &egeszR);
    if(maradek == 0){
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n, szorzat;

    cout << "Add meg a tomb meretet: ";
    cin >> n;

    float v[n];

    for(int i=0; i<=n; i++){
        cout << "v[" << i << "]= ";
        cin >> v[i];
        if(xyz(v[i])){
            szorzat = szorzat * v[i];
        }
    }

    cout << "A negyzetszamok szorzata: " << szorzat << endl;

    return 0;
}
