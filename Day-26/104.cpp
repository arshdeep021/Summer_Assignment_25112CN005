#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int ans;

    cout << "----- QUIZ GAME -----\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n2. Which language is used in C++?\n";
    cout << "1. Markup\n2. Programming\n3. Styling\n4. Query\n";
    cout << "Enter answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n3. What is 5 + 3?\n";
    cout << "1. 6\n2. 7\n3. 8\n4. 9\n";
    cout << "Enter answer: ";
    cin >> ans;
    if (ans == 3)
        score++;

    cout << "\n4. Which is a loop in C++?\n";
    cout << "1. if\n2. for\n3. int\n4. return\n";
    cout << "Enter answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n5. Which is an input function?\n";
    cout << "1. cout\n2. cin\n3. int\n4. main\n";
    cout << "Enter answer: ";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n----- RESULT -----\n";
    cout << "Your score = " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good job!\n";
    else
        cout << "Keep practicing!\n";

    return 0;
}