#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start = 1, end = 7000;

    for (int num = start; num <= end; num++)
    {
        int temp = num;
        int digits = 0;

        int t = num;
        while (t > 0)
        {
            digits++;
            t /= 10;
        }

        int sum = 0;
        t = num;

        while (t > 0)
        {
            int rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }
        if (sum == num)
            cout << num << " ";
    }

    return 0;
}