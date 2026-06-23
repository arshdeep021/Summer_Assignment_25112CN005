#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> key;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }

    cout << "Frequency of " << key << " = " << count;

    return 0;
}