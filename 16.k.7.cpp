#include <iostream>
#include <fstream>

using namespace std;

int main(){

    unsigned short szam;

    ifstream file1;
    ofstream file2;

    file1.open("voszto.in");
    file2.open("voszto.out");

    file1 >> szam;

    for(unsigned short i = 2; i <= (szam/2); i++){
        if(szam % i == 0){
            file2 << i << " ";
        }
    }

    file1.close();
    file2.close();


    return 0;
}