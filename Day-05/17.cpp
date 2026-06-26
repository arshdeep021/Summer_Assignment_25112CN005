#include <iostream>
using namespace std;

int main()
{
    int num = 28;
    int sum = 1;

    if (num <= 1)
    {
        cout << num << " is not a Perfect Number.";
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;

            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }

    if (sum == num)
        cout << num << " is a Perfect Number.";
    else
        cout << num << " is not a Perfect Number.";

    return 0;
}