#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int maxLen = 0, currLen = 0;

    for (int i = 0;; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }
            currLen = 0;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest word(s): ";

    currLen = 0;
    int start = 0;

    for (int i = 0;; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            if (currLen == 0)
                start = i;
            currLen++;
        }
        else
        {
            if (currLen == maxLen)
            {
                for (int j = start; j < start + currLen; j++)
                {
                    cout << str[j];
                }
                cout << " ";
            }
            currLen = 0;
        }

        if (str[i] == '\0')
            break;
    }

    return 0;
}