#include <iostream>
using namespace std;

int main()
{
    int num = 24342, revNum = 0, rem;
    int temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        revNum = revNum * 10 + rem;
        temp /= 10;
    }

    if (num == revNum)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}