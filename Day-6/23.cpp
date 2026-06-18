#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{
    int num = 13;
    cout << countSetBits(num);
    return 0;
}