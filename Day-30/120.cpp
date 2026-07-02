#include <iostream>
#include <cstring>
using namespace std;

struct Account
{
    int accNo;
    char name[50];
    float balance;
    int pin;
};

Account a[100];
int n = 0;

// find account
int findAccount(int accNo)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].accNo == accNo)
            return i;
    }
    return -1;
}

// verify PIN
bool verifyPin(int idx)
{
    int inputPin;
    cout << "Enter PIN: ";
    cin >> inputPin;

    if (a[idx].pin == inputPin)
        return true;

    cout << "Incorrect PIN.\n";
    return false;
}

// create account
void createAccount()
{
    cout << "Enter Account Number: ";
    cin >> a[n].accNo;
    cin.ignore();

    cout << "Enter Name: ";
    cin.getline(a[n].name, 50);

    cout << "Enter Initial Balance: ";
    cin >> a[n].balance;

    int pin;
    cout << "Set 4-digit PIN: ";
    cin >> pin;

    if (pin < 1000 || pin > 9999)
    {
        cout << "Invalid PIN. Must be 4 digits.\n";
        return;
    }

    a[n].pin = pin;
    n++;

    cout << "Account created.\n";
}

// display accounts
void displayAccounts()
{
    if (n == 0)
    {
        cout << "No accounts found.\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nAcc No: " << a[i].accNo;
        cout << "\nName: " << a[i].name;
        cout << "\nBalance: " << a[i].balance << endl;
    }
}

// deposit
void deposit()
{
    int accNo;
    float amt;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int idx = findAccount(accNo);
    if (idx == -1)
    {
        cout << "Account not found.\n";
        return;
    }

    if (!verifyPin(idx))
        return;

    cout << "Enter amount: ";
    cin >> amt;

    if (amt <= 0)
    {
        cout << "Invalid amount.\n";
        return;
    }

    a[idx].balance += amt;
    cout << "Deposited successfully.\n";
}

// withdraw
void withdraw()
{
    int accNo;
    float amt;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int idx = findAccount(accNo);
    if (idx == -1)
    {
        cout << "Account not found.\n";
        return;
    }

    if (!verifyPin(idx))
        return;

    cout << "Enter amount: ";
    cin >> amt;

    if (amt <= 0)
    {
        cout << "Invalid amount.\n";
    }
    else if (amt > a[idx].balance)
    {
        cout << "Insufficient balance.\n";
    }
    else
    {
        a[idx].balance -= amt;
        cout << "Withdraw successful.\n";
    }
}

// delete account
void deleteAccount()
{
    int accNo;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int idx = findAccount(accNo);
    if (idx == -1)
    {
        cout << "Account not found.\n";
        return;
    }

    if (!verifyPin(idx))
        return;

    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
    cout << "Account deleted.\n";
}

// change PIN
void changePin()
{
    int accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;

    int idx = findAccount(accNo);
    if (idx == -1)
    {
        cout << "Account not found.\n";
        return;
    }

    if (!verifyPin(idx))
        return;

    int newPin;
    cout << "Enter New 4-digit PIN: ";
    cin >> newPin;

    if (newPin < 1000 || newPin > 9999)
    {
        cout << "Invalid PIN.\n";
        return;
    }

    a[idx].pin = newPin;
    cout << "PIN changed successfully.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- BANK SYSTEM WITH PIN ---\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Delete Account\n";
        cout << "6. Change PIN\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            displayAccounts();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            deleteAccount();
            break;
        case 6:
            changePin();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 7);

    return 0;
}