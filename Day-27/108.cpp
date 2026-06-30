#include <iostream>
using namespace std;

int main()
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();

    cout << "Enter Name: ";
    cin.getline(name, 50);

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n----- MARKSHEET -----\n";
    cout << "Roll No: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    if (grade == 'F')
        cout << "Result: Fail\n";
    else
        cout << "Result: Pass\n";

    return 0;
}