#include <iostream>
using namespace std;

int main()
{
    int num = 7561, revNum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num /= 10;
    }

    cout << "Reversed number = " << revNum << endl;
    return 0;
}