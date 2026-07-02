#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n--- ADVANCED CALCULATOR ---\n";
        cout << "1. Addition (Multiple)\n";
        cout << "2. Subtraction (Sequential)\n";
        cout << "3. Multiplication (Multiple)\n";
        cout << "4. Division (Sequential)\n";
        cout << "5. Power (a^b)\n";
        cout << "6. Square Root\n";
        cout << "7. Factorial\n";
        cout << "8. Modulus (Two Numbers)\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            int n;
            double num, sum = 0;
            cout << "How many numbers? ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cin >> num;
                sum += num;
            }

            cout << "Result = " << sum << endl;
            break;
        }

        case 2:
        {
            int n;
            double result, num;
            cout << "How many numbers? ";
            cin >> n;

            cin >> result; 

            for (int i = 1; i < n; i++)
            {
                cin >> num;
                result -= num;
            }

            cout << "Result = " << result << endl;
            break;
        }

        case 3:
        {
            int n;
            double num, result = 1;
            cout << "How many numbers? ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cin >> num;
                result *= num;
            }

            cout << "Result = " << result << endl;
            break;
        }

        case 4:
        {
            int n;
            double result, num;
            cout << "How many numbers? ";
            cin >> n;

            cin >> result;

            for (int i = 1; i < n; i++)
            {
                cin >> num;

                if (num == 0)
                {
                    cout << "Division by zero not allowed.\n";
                    break;
                }
                result /= num;
            }

            cout << "Result = " << result << endl;
            break;
        }

        case 5:
        {
            double a, b;
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;
        }

        case 6:
        {
            double num;
            cin >> num;

            if (num < 0)
                cout << "Invalid input\n";
            else
                cout << "Result = " << sqrt(num) << endl;
            break;
        }

        case 7:
        {
            int num;
            long long fact = 1;
            cin >> num;

            for (int i = 1; i <= num; i++)
                fact *= i;

            cout << "Result = " << fact << endl;
            break;
        }

        case 8:
        {
            int a, b;
            cin >> a >> b;

            if (b == 0)
                cout << "Invalid\n";
            else
                cout << "Result = " << a % b << endl;
            break;
        }

        case 9:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 9);

    return 0;
}