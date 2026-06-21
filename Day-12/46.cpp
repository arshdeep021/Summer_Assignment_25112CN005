#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n, sum = 0, rem;
    int digits = 0;

    int temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= rem;
        }
        sum += power;
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num = 153;

    if (isArmstrong(num))
        cout << num << " is Armstrong";
    else
        cout << num << " is not Armstrong";

    return 0;
}