#include <iostream>
#include <cstring>
using namespace std;

void toLowerManual(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    Contact c[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- CONTACT MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact (Case-Insensitive)\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter Name: ";
            cin.getline(c[n].name, 50);

            cout << "Enter Phone: ";
            cin.getline(c[n].phone, 15);

            n++;
            cout << "Contact added.\n";
            break;

        case 2:
            for (int i = 0; i < n; i++)
            {
                cout << "\nName: " << c[i].name;
                cout << "\nPhone: " << c[i].phone << endl;
            }
            break;

        case 3:
        {
            char searchName[50];
            char tempName[50];
            int found = 0;

            cout << "Enter name to search: ";
            cin.getline(searchName, 50);

            toLowerManual(searchName);

            cout << "\nMatching Contacts:\n";

            for (int i = 0; i < n; i++)
            {
                strcpy(tempName, c[i].name);
                toLowerManual(tempName);

                if (strcmp(tempName, searchName) == 0)
                {
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                    found = 1;
                }
            }

            if (!found)
                cout << "No matching contacts found.\n";

            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}