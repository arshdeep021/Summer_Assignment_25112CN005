#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- STUDENT RECORD SYSTEM ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search by Roll No\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(s[n].name, 50);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student added.\n";
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
                    cout << "\nRoll: " << s[i].roll;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
                }
            }
            break;

        case 3:
        {
            int roll, found = 0;
            cout << "Enter roll number: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "\nStudent Found:";
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
            break;
        }

        case 4:
        {
            int roll;
            cout << "Enter roll number to update: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "Enter new marks: ";
                    cin >> s[i].marks;
                    cout << "Marks updated.\n";
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int roll;
            cout << "Enter roll number to delete: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    cout << "Record deleted.\n";
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