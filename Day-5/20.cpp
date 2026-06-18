#include <iostream>
using namespace std;

int main()
{
    int num = 420;
    int largestPrime = -1;

    while (num % 2 == 0)
    {
        largestPrime = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            largestPrime = i;
            num /= i;
        }
    }

    if (num > 2)
    {
        largestPrime = num;
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}