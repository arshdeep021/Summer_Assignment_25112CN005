#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;

    while (str[i] != '\0')
    {
        char current = str[i];
        int count = 0;

        while (str[i] == current)
        {
            count++;
            i++;
        }

        cout << current;
        if (count > 1)
            cout << count;
    }

    return 0;
}