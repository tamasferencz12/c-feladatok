#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string nev, elt;
    unsigned short n;
    float atlag, maximum;

    ifstream file1;
    ofstream file2;

    file1.open("tanulok.in");
    file2.open("tanulok.out");

    file1 >> n;

    for (unsigned int i = 1; i <= n; i++)
    {
        file1 >> nev >> atlag;
        if (atlag > maximum)
        {
            maximum = atlag;
            elt = nev;
        }
    }

    file2 << elt << " " << maximum;

    file1.close();
    file2.close();

    return 0;
}
