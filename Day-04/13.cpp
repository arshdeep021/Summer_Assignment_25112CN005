#include <iostream>
using namespace std;

int main()
{
    int n = 12;

    if (n <= 0)
        return 0;

    int a = 0, b = 1;

    cout << a;

    if (n > 1)
        cout << ", " << b;

    for (int i = 2; i < n; i++)
    {
        int nextTerm = a + b;
        a = b;
        b = nextTerm;

        cout << ", " << nextTerm;
    }

    return 0;
}
