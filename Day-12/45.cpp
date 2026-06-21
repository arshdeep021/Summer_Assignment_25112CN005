#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int original = n, rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    return original == rev;
}

int main()
{
    int num = 121;

    if (isPalindrome(num))
        cout << num << " is palindrome";
    else
        cout << num << " is not palindrome";

    return 0;
}