#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 1634;
    int temp = n;
    int digits = 0;

    int t = n;
    while (t > 0)
    {
        digits++;
        t /= 10;
    }

    int sum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if (sum == temp)
        cout << "Yes, Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}