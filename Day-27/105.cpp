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
    int n = 0;
    int choice;

    do
    {
        cout << "\n--- STUDENT RECORD SYSTEM ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(s[n].name, 50);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student added successfully.\n";
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
            int searchRoll, found = 0;
            cout << "Enter roll number to search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    cout << "\nRecord Found:";
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
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}