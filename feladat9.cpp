#include <iostream>

using namespace std;

float elsofoku(float a, float b)
{
    return -1*b /a;
}
int main()
{
    float a, b;
    cout << "Add meg az a-t es a b-t: ";
    cin >> a >> b;
    cout << "x= " << elsofoku(a,b) << endl;
    return 0;
}
