#include <iostream>
using namespace std;

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{

    cout << factorialN(5) << endl;
    cout << factorialN(8) << endl;

    return 0;
}