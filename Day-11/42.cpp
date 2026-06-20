#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x = 10, y = 25;
    cout << "Maximum = " << maximum(x, y);
    return 0;
}