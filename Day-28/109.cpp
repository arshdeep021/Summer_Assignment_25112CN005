#include <iostream>
using namespace std;

struct Book
{
    int id;
    char name[50];
    int issued; // 0 = available, 1 = issued
};

int main()
{
    Book b[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- LIBRARY MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> b[n].id;
            cin.ignore();

            cout << "Enter Book Name: ";
            cin.getline(b[n].name, 50);

            b[n].issued = 0;
            n++;
            cout << "Book added successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "\nID: " << b[i].id;
                    cout << "\nName: " << b[i].name;
                    cout << "\nStatus: " << (b[i].issued ? "Issued" : "Available") << endl;
                }
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Book ID to issue: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].issued == 0)
                    {
                        b[i].issued = 1;
                        cout << "Book issued.\n";
                    }
                    else
                    {
                        cout << "Book already issued.\n";
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;
        }

        case 4:
        {
            int id, found = 0;
            cout << "Enter Book ID to return: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].issued == 1)
                    {
                        b[i].issued = 0;
                        cout << "Book returned.\n";
                    }
                    else
                    {
                        cout << "Book was not issued.\n";
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;
        }

        case 5:
        {
            int id, found = 0;
            cout << "Enter Book ID to search: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    cout << "\nBook Found:";
                    cout << "\nName: " << b[i].name;
                    cout << "\nStatus: " << (b[i].issued ? "Issued" : "Available") << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;
        }

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}