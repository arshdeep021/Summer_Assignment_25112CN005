#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 7;
    cout << "Sum = " << sum(x, y);
    return 0;
}