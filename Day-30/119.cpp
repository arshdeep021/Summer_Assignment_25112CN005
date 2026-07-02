#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- EMPLOYEE MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> e[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(e[n].name, 50);

            cout << "Enter Salary: ";
            cin >> e[n].salary;

            n++;
            cout << "Employee added.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No employees found.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "\nID: " << e[i].id;
                    cout << "\nName: " << e[i].name;
                    cout << "\nSalary: " << e[i].salary << endl;
                }
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    cout << "\nEmployee Found:";
                    cout << "\nName: " << e[i].name;
                    cout << "\nSalary: " << e[i].salary << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";
            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Employee ID to update: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    cout << "Enter new salary: ";
                    cin >> e[i].salary;
                    cout << "Salary updated.\n";
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int id;
            cout << "Enter Employee ID to delete: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }
                    n--;
                    cout << "Employee deleted.\n";
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