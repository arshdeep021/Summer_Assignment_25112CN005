#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[10][10];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    bool isSymmetric = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i][j] != A[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}