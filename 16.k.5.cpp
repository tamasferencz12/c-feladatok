#include <iostream>
#include <fstream>

using namespace std;

int main(){

 unsigned int n;
 float szam2, x, atlag;

 ifstream file1;
 ofstream file2;

 file1.open("szamok.in");
 file2.open("szamok.out");

 file1 >> n;

 for(int i = 1; i <= n; i++){
    file1 >> szam2;
    if(szam2 >= 0){
        x = x + szam2;
    }
 }
  atlag = x / n;

  file2 << atlag;

  file1.close();
  file2.close();

    return 0;
}