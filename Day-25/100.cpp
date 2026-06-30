#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();

    char words[100][100];

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++)
    {
        cin.getline(words[i], 100);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            {
                char temp[100];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "Words sorted by length:\n";
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}