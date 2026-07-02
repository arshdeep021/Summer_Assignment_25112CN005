#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do
    {
        cout << "\n--- STRING OPERATIONS ---\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Check Palindrome\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Count Vowels & Consonants\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Length = " << strlen(str) << endl;
            break;

        case 2:
        {
            char temp[100];
            strcpy(temp, str);

            int len = strlen(temp);
            for (int i = 0; i < len / 2; i++)
            {
                char t = temp[i];
                temp[i] = temp[len - 1 - i];
                temp[len - 1 - i] = t;
            }

            cout << "Reversed = " << temp << endl;
            break;
        }

        case 3:
        {
            char temp[100];
            strcpy(temp, str);

            int len = strlen(temp);
            bool isPalindrome = true;

            for (int i = 0; i < len / 2; i++)
            {
                if (temp[i] != temp[len - 1 - i])
                {
                    isPalindrome = false;
                    break;
                }
            }

            if (isPalindrome)
                cout << "Palindrome\n";
            else
                cout << "Not Palindrome\n";
            break;
        }

        case 4:
        {
            char temp[100];
            strcpy(temp, str);

            for (int i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                {
                    temp[i] = temp[i] - 32;
                }
            }

            cout << "Uppercase = " << temp << endl;
            break;
        }

        case 5:
        {
            char temp[100];
            strcpy(temp, str);

            for (int i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'A' && temp[i] <= 'Z')
                {
                    temp[i] = temp[i] + 32;
                }
            }

            cout << "Lowercase = " << temp << endl;
            break;
        }

        case 6:
        {
            int vowels = 0, consonants = 0;

            for (int i = 0; str[i] != '\0'; i++)
            {
                char ch = str[i];

                if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                {
                    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                        vowels++;
                    else
                        consonants++;
                }
            }

            cout << "Vowels = " << vowels << endl;
            cout << "Consonants = " << consonants << endl;
            break;
        }

        case 7:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 7);

    return 0;
}