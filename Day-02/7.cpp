#include <iostream>
using namespace std;

int getProduct(int n)
{
    int product = 1;
    while (n != 0)
    {
        product = product * (n % 10);
        n /= 10;
    }
    return product;
}

int main()
{
    cout << getProduct(456) << endl;
    return 0;
}