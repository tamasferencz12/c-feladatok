#include <iostream>

using namespace std;

int main(){

   unsigned short n;

   cout << "Add meg a tomb meretet: ";
   cin >> n;

   int v[n];

   for(unsigned int i = 0; i < n; i++){
       cout << "v[" << i << "]= ";
       cin >> v[i];
   }
   
   cout << "A tomb tagjainak forditott sorendje a kovetkezo: ";

   for( int i = n-1; i >= 0;i--){
       cout << v[i] << ", ";
   }
   
   cout << "\b\b" << "  " << endl;

    return 0;
}