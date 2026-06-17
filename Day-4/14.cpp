#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1;

    while (n--)
    {
        int temp = a;
        a = b;
        b = temp + b;
    }

    return a;
}

int main()
{
    cout << fib(10) << endl;
    return 0;
}
