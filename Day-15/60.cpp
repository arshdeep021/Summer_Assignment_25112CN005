#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }

    while (j < n)
    {
        arr[j++] = 0;
    }

    cout << "Array after moving zeroes:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}