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

    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
            maxCount = count;
    }

    cout << "Element(s) with maximum frequency:\n";

    for (int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count == maxCount)
            cout << arr[i] << " ";
    }

    cout << "\nFrequency = " << maxCount;

    return 0;
}