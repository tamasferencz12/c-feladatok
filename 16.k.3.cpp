#include <iostream>
#include <fstream>

using namespace std;

int main(){

  unsigned int x1, x2, szj, db=0;

  ifstream file1;
  ofstream file2;

  file1.open("szamok.in");
  file2.open("szamok.out");

  file1 >> x1 >> x2;

  while( x1 != 0){
      szj = x1 % 10;
      if(szj == x2){
          db++;
      }
      x1 /= 10;
  }

  file2 << db;

  file1.close();
  file2.close();
  
    return 0;
}