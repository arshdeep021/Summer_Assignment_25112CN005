#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++)
    {
        char start = str[i];
        char end = str[length - i - 1];

        if (start >= 'A' && start <= 'Z')
            start = start + 32;

        if (end >= 'A' && end <= 'Z')
            end = end + 32;

        if (start != end)
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";

    return 0;
}