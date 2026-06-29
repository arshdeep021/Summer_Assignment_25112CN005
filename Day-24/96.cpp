#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] == 0)
        {
            str[j] = str[i];
            freq[str[i]]++;
            j++;
        }
    }

    str[j] = '\0';

    cout << "String after removing duplicates = " << str;

    return 0;
}