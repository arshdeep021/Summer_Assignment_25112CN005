#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int A[100];

    cout << "Enter sorted elements of first array:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int B[100];

    cout << "Enter sorted elements of second array:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    int C[200];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < n1)
    {
        C[k++] = A[i++];
    }

    while (j < n2)
    {
        C[k++] = B[j++];
    }

    cout << "Merged array:\n";
    for (int i = 0; i < k; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}