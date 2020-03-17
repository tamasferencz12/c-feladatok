#include <iostream>

using namespace std;

void kiir ( float v[], int n , int kor){
    cout << kor << ".kor" << endl; 
    for (int i = 0; i< n ; i++){
        cout << "v[" << i << "]=" << v[i] << endl;
    }
}

int main(){

   unsigned short n;

   cout << "Add meg a tomb meretet: ";
   cin >> n;

   float v[n],c;

   for(unsigned int i = 0; i < n; i++){
       cout << "Tanulo mediaja: ";
       cin >> v[i];
   }

    for (int i = n; i > 0; i--){
        for(int j = 0; j < i-1;j++){
            cout <<  i << ","  << j << endl;
            if(v[j] > v[j+1]){
                c = v[j];
                v[j] = v[j + 1];
                v[j +1] = c;
            }
        }
          kiir(v,n,i);
    }

    





   return 0;
}