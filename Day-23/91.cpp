#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        char ch = str1[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        freq[ch]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        char ch = str2[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        freq[ch]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams";

    return 0;
}