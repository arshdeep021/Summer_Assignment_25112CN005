#include <iostream>
using namespace std;

int findSum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    cout << findSum(7) << endl;
    cout << findSum(5) << endl;

    return 0;
}