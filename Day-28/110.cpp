#include <iostream>
using namespace std;

struct Account
{
    int accNo;
    char name[50];
    float balance;
    int pin;
};

int main()
{
    Account acc[100];
    int n = 0, choice;

    do
    {
        cout << "\n--- BANK ACCOUNT SYSTEM ---\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Account Number: ";
            cin >> acc[n].accNo;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(acc[n].name, 50);

            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;

            cout << "Set PIN (4-digit): ";
            cin >> acc[n].pin;

            n++;
            cout << "Account created successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No accounts found.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "\nAccount No: " << acc[i].accNo;
                    cout << "\nName: " << acc[i].name;
                    cout << "\nBalance: " << acc[i].balance << endl;
                }
            }
            break;

        case 3:
        {
            int accNo, enteredPin;
            float amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    cout << "Enter PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == acc[i].pin)
                    {
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        acc[i].balance += amount;
                        cout << "Deposit successful.\n";
                    }
                    else
                    {
                        cout << "Incorrect PIN.\n";
                    }
                    break;
                }
            }
            break;
        }

        case 4:
        {
            int accNo, enteredPin;
            float amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    cout << "Enter PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == acc[i].pin)
                    {
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;

                        if (amount > acc[i].balance)
                        {
                            cout << "Insufficient balance.\n";
                        }
                        else
                        {
                            acc[i].balance -= amount;
                            cout << "Withdrawal successful.\n";
                        }
                    }
                    else
                    {
                        cout << "Incorrect PIN.\n";
                    }
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int accNo, found = 0;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    cout << "\nAccount Found:";
                    cout << "\nName: " << acc[i].name;
                    cout << "\nBalance: " << acc[i].balance << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";
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