#include <iostream>
using namespace std;

int factorial(int n)
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
    int num = 145;
    int sum = 0;

    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Strong Number.";
    else
        cout << num << " is not a Strong Number.";

    return 0;
}