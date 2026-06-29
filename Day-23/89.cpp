#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        freq[ch]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (freq[ch] == 1)
        {
            cout << "First non-repeating character = " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found";

    return 0;
}