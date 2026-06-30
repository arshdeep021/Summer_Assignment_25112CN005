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
    Employee emp[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n--- EMPLOYEE MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search by ID\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(emp[n].name, 50);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee added successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "\nID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nSalary: " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
        {
            int searchId, found = 0;
            cout << "Enter ID to search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == searchId)
                {
                    cout << "\nEmployee Found:";
                    cout << "\nName: " << emp[i].name;
                    cout << "\nSalary: " << emp[i].salary << endl;
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
            int updateId;
            cout << "Enter ID to update salary: ";
            cin >> updateId;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == updateId)
                {
                    cout << "Enter new salary: ";
                    cin >> emp[i].salary;
                    cout << "Salary updated.\n";
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int deleteId;
            cout << "Enter ID to delete: ";
            cin >> deleteId;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == deleteId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
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