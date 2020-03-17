// Készíts programot, amely kiszámítja a következő kifejezést:
//S=1-2+3-4...+(-1)n+1n

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int n, s=0, i=1;

    cout << "Add meg az n-t: ";
    cin >> n;

    do{
        s+= pow(-1,i+1)*i;
        i++;
    }while (i >= 1 && i <= n);

    cout << "S= " << s << endl;

    return 0;
}