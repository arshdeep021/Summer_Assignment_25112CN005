#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        freq[ch]++;

        if (freq[ch] == 2) {
            cout << "First repeating character = " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found";

    return 0;
}