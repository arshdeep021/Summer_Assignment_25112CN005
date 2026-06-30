#include <iostream>
using namespace std;

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 1000.0, amount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin)
    {
        cout << "Incorrect PIN!";
        return 0;
    }

    do
    {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited successfully.\n";
            }
            else
            {
                cout << "Invalid amount.\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient balance.\n";
            }
            else if (amount <= 0)
            {
                cout << "Invalid amount.\n";
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful.\n";
            }
            break;

        case 4:
        {
            int oldPin, newPin;
            cout << "Enter current PIN: ";
            cin >> oldPin;

            if (oldPin == pin)
            {
                cout << "Enter new PIN: ";
                cin >> newPin;
                pin = newPin;
                cout << "PIN changed successfully.\n";
            }
            else
            {
                cout << "Incorrect current PIN.\n";
            }
            break;
        }

        case 5:
            cout << "Thank you for using ATM.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}