#include <iostream>
using namespace std;

int main()
{
    int num = 28;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";

            if (i != num / i)
            {
                cout << num / i << " ";
            }
        }
    }
    return 0;
}