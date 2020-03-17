#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isPrime(int number)
{
    int n = number;
    if (number < 0)
    {
        n = -1 * number;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int kThPrimeDivider(int number, int k)
{
    int dividerCount = 0;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0 && isPrime(i))
        {
            dividerCount++;
        }
        if (dividerCount == k)
        {
            return i;
        }
    }

    return 0;
}

int main()
{

    cout << kThPrimeDivider(30, 3) << endl;

    //TESZT
    cout << isPrime(5) << endl;
    cout << isPrime(6) << endl;

    //PELDA
    int primSum = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (isPrime(i))
        {
            cout << i << (i < 5 ? "..." : "");
            primSum += i;
        }
    }
    cout << endl
         << primSum << endl;
    return 0;
}