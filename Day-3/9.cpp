#include <iostream>
using namespace std;

int main()
{
    int n = 31, count = 0;

    if (n <= 1 || ((n > 2) && (n % 2 == 0)))
        cout << n << " is not prime";
    else
    {
        if (n == 2)
        {
            cout << n << " is prime";
            return 0;
        }
        else
        {

            for (int i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                    count++;
            }

            if (count > 0)
                cout << n << " is not prime";
            else
                cout << n << " is prime";
        }
    }
    return 0;
}