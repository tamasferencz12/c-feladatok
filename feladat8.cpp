#include <iostream>
#include <cmath>
using namespace std;

float fuggveny(float x)
{
    if (x<-1)
        return 5;
    else if(x < 3)
        return pow(x,2)-1 ;
    else
        return sqrt(x-3);

}

int main()
{
    float a;
    cout << "Ad be az x-et: ";
    cin >> a;
    cout << "f(x)= " << fuggveny(a) << endl;
    return 0;
}


