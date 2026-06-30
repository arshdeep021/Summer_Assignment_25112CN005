#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, pf, medical, gross, net;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- SALARY MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Salaries\n";
        cout << "3. Exit\n";
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

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basic;

            emp[n].hra = 0.20 * emp[n].basic;
            emp[n].da = 0.10 * emp[n].basic;
            emp[n].medical = 1000;

            emp[n].pf = 0.12 * emp[n].basic;

            emp[n].gross = emp[n].basic + emp[n].hra + emp[n].da + emp[n].medical;
            emp[n].net = emp[n].gross - emp[n].pf;

            n++;
            cout << "Salary added successfully.\n";
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
                    cout << "\nBasic: " << emp[i].basic;
                    cout << "\nHRA: " << emp[i].hra;
                    cout << "\nDA: " << emp[i].da;
                    cout << "\nMedical: " << emp[i].medical;
                    cout << "\nPF Deduction: " << emp[i].pf;
                    cout << "\nGross Salary: " << emp[i].gross;
                    cout << "\nNet Salary: " << emp[i].net << endl;
                }
            }
            break;

        case 3:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}