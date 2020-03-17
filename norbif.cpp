#include <iostream>

using namespace std;

int main(){
    unsigned int n,szam,ossz;

    ossz = 0;

    cout << "Add meg az n-t: ";
    cin >> n;

    for (unsigned int i = 1; i <=n; i++){
        ossz = ossz + i;
    }
    
    cout << "A szamok osszege 1-n-ig: " << ossz << endl;
}
