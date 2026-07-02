#include <iostream>
using namespace std;

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Item items[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- INVENTORY MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter Item ID: ";
            cin >> items[n].id;
            cin.ignore();

            cout << "Enter Item Name: ";
            cin.getline(items[n].name, 50);

            cout << "Enter Quantity: ";
            cin >> items[n].quantity;

            cout << "Enter Price: ";
            cin >> items[n].price;

            n++;
            cout << "Item added successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No items available.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "\nID: " << items[i].id;
                    cout << "\nName: " << items[i].name;
                    cout << "\nQuantity: " << items[i].quantity;
                    cout << "\nPrice: " << items[i].price << endl;
                }
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Item ID to search: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (items[i].id == id)
                {
                    cout << "\nItem Found:";
                    cout << "\nName: " << items[i].name;
                    cout << "\nQuantity: " << items[i].quantity;
                    cout << "\nPrice: " << items[i].price << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";
            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Item ID to update quantity: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (items[i].id == id)
                {
                    cout << "Enter new quantity: ";
                    cin >> items[i].quantity;
                    cout << "Quantity updated.\n";
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int id;
            cout << "Enter Item ID to delete: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (items[i].id == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        items[j] = items[j + 1];
                    }
                    n--;
                    cout << "Item deleted.\n";
                    break;
                }
            }
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