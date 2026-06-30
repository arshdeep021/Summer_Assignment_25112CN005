#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    char names[100][100];

    cout << "Enter names:\n";
    for (int i = 0; i < n; i++)
    {
        cin.getline(names[i], 100);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}