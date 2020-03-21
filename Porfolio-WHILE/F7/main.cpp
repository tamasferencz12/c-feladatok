#include <iostream>
#include <cmath>

using namespace std;

int ncount(int num)
{
    int cnt = 0;
    while(num !=0 )
    {
        num/=10;
        cnt++;
    }
    return cnt;
}


bool mirror(int num)
{
    if(num < 0)
    {
        num = -1* num;
    }

    if(num < 10)
    {
        return true;
    }

    int last  = num % 10;
    int nct = ncount(num) - 1;
    int p = pow(10, nct);
    int first = num / p;

    cout << "last " << last << ", first "<< first <<  " , nct " << nct <<  endl;

    if (first != last )
    {
        return false;
    }
    else
    {
        int newnum = (num % p) / 10;
        cout << "newnum " << newnum <<  endl;
        return mirror(newnum);
    }

}

int main()
{
    int num;
    while(num  != 0)
    {
        cout << "Adj meg egy szamot es megmondom, hogy tukorszam-e :) ";
        cin >> num;
        if(num == 0)
        {
            break;
        }

        cout << (mirror(num) ? "Igen" : "Nem") << endl;

    }
    return 0;
}
