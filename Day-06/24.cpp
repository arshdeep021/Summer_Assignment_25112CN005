#include <iostream>
using namespace std;

long long power(int x, int n)
{
    long long result = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
            result *= x;

        x *= x;
        n /= 2;
    }

    return result;
}

int main()
{
    int x = 2, n = 5;
    cout << power(x, n);
    return 0;
}