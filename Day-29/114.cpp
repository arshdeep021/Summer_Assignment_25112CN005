#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice;

    do
    {
        cout << "\n--- ARRAY OPERATIONS ---\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Find Max & Min\n";
        cout << "7. Reverse Array\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter size: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            break;

        case 2:
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3:
        {
            int pos, val;
            cout << "Enter position and value: ";
            cin >> pos >> val;

            if (pos < 0 || pos > n)
            {
                cout << "Invalid position\n";
            }
            else
            {
                for (int i = n; i > pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                n++;
            }
            break;
        }

        case 4:
        {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;

            if (pos < 0 || pos >= n)
            {
                cout << "Invalid position\n";
            }
            else
            {
                for (int i = pos; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            break;
        }

        case 5:
        {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    cout << "Found at index " << i << endl;
                    found = 1;
                }
            }

            if (!found)
                cout << "Not found\n";
            break;
        }

        case 6:
        {
            int max = arr[0], min = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
                if (arr[i] < min)
                    min = arr[i];
            }

            cout << "Max = " << max << endl;
            cout << "Min = " << min << endl;
            break;
        }

        case 7:
        {
            for (int i = 0; i < n / 2; i++)
            {
                int temp = arr[i];
                arr[i] = arr[n - 1 - i];
                arr[n - 1 - i] = temp;
            }
            cout << "Array reversed.\n";
            break;
        }

        case 8:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 8);

    return 0;
}