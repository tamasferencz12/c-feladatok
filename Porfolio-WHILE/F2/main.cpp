#include <iostream>

using namespace std;

int main()
{
   unsigned int szam, szamj, szam_j, x=0;

   cout << "Adj meg egy tobbjegyu termeszetes szamot: ";
   cin >> szam;
   cout << "Adj meg egy szamjegyet: ";
   cin >> szamj;

   while (szam != 0){
        szam_j = szam % 10;
        if(szam_j == szamj){
            x++;
        }
        szam /= 10;
   }

   cout << "A(z) " << szamj << " ennyiszer szerepel a szamba: " << x;

    return 0;
}
