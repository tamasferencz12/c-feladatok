#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    short homerseklet, hom1=0, hom2=0;

    ifstream file1;
    ofstream file2;

    file1.open("hom.in");
    file2.open("hom.out");

    while( !file1.eof()){
        file1 >> homerseklet;
        if (homerseklet < 0){
            hom1++;
        }else {
            hom2++;
        }
    }
    file2 << "Fagypont feletti napok szama: " << hom2 << endl;
    file2 << "Fagypont alatti napok szama: " << hom1 << endl;

    file1.close();
    file2.close();

    return 0;
}