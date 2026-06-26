#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum += last;
        n /= 10;
    }
    return sum;
}

int main()
{
    cout << sumOfDigits(456) << endl;
    cout << sumOfDigits(63208) << endl;

    return 0;
}