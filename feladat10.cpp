#include <iostream>
#include <cmath>
using namespace std;

float delta (float a, float b, float c)
{
    return pow(b,2)-4*a*c;
}
float x1 (float a, float b, float c)
{
    return (-1*b + sqrt(delta(a,b,c)))/2*a;
}
float x2 (float a, float b, float c)
{
    return (-1*b - sqrt(delta(a,b,c)))/2*a;
}
int main()
{
    float a,b,c,d;
    cout << "Kiszamoljuk az ax^2 + bx + c = 0 egyenlet megoldasait. " << endl;
    cout << "Add meg az a,b,c ertekeit:";
    cin >> a >> b >>  c;
    d = delta(a,b,c);
    if(d < 0)
    {
        cout << "Nincs valos megoldas!" << endl;
    }
    else if (d == 0)
    {
        cout << "A ket megoldas egyenlo, x1=x2= " << x1(a,b,c) << endl;
    }
    else
    {
        cout << "x1= " << x1(a,b,c) << endl;
        cout << "x2= " << x2(a,b,c) << endl;
    }
    return 0;
}