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

    int maxFreq = 0;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
        }
    }

    cout << "Maximum occurring character(s): ";

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == maxFreq)
        {
            cout << (char)i << " ";
        }
    }

    cout << "\nFrequency = " << maxFreq;

    return 0;
}