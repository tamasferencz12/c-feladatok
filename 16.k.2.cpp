#include <iostream>
#include <fstream>

using namespace std;

int main(){

 unsigned int szam1, szam2, x;

 ifstream file1;
 ofstream file2;

 file1.open("szam.in");
 file2.open("szam.out");

 file1 >> szam1 >> szam2;
 x = (szam1 * szam1 ) + (szam2 * szam2);
 file2 << x;
 
 file1.close();
 file2.close();

    return 0;
}