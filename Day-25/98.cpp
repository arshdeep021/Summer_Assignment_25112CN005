#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i]] = 1;
    }

    cout << "Common characters: ";

    for (int i = 0; str2[i] != '\0'; i++) {
        if (freq[str2[i]] == 1) {
            cout << str2[i] << " ";
            freq[str2[i]] = 0;
        }
    }

    return 0;
}