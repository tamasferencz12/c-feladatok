//Készíts programot, amely bekéri n tanulónak a médiáját és kiszámítja az osztályátlagot.

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    unsigned int media, tanulokSzama, mediaOssz=0, i=1;
    float atlag;

    cout << "Add meg a tanulok szamat: ";
    cin >> tanulokSzama;
    cout << "Add meg a mediat/mediakat: ";
    
    do{
        cin >> media;
        mediaOssz = mediaOssz + media;
        i++;
    }while(i >= 1 && i <= tanulokSzama);

    atlag = (float) mediaOssz / tanulokSzama;

    cout << "Atlag= " << atlag << endl;

    return 0;
}