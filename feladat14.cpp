#include <iostream>
#include <cmath>
using namespace std;

bool prim(unsigned int a)
{
   bool prim=true;
   
   for (unsigned int j = 2; j <= sqrt(a) ;j++){
        if(a % j == 0){
            prim = false;
        }
    }
    return prim;
}

int main(){

    unsigned int a, i2,n;

    cout << "Add mneg az n-et: ";
    cin >> n;

    for(unsigned int i = 3; i <=n-2; i++){
        i2= i + 2;

        if (prim(i) && prim(i2)){
           cout << "(" << i << "," << i2 << ")" << endl;
        }
    }
    return 0;
}