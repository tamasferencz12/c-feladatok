#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    unsigned int magassag, tanulok, maximum=0;

    ifstream file1;
    ofstream file2;

    file1.open("kicsi.in");
    file2.open("kicsi.out");

    file1 >> tanulok;

    for (unsigned int i = 1; i <= tanulok; i++)
    {
        file1 >> magassag;
        if(magassag > maximum){
            maximum = magassag;
        }
    }

    file2 << maximum;

    file1.close();
    file2.close();

    return 0;
}