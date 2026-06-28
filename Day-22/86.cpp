#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' '))
        {
            count++;
        }
    }

    cout << "Number of words = " << count;

    return 0;
}