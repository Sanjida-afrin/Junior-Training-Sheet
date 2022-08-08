#include <iostream>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n;
    x = n % 4;
    if (n == 0)
        cout << 1;
    else if (x == 1)
        cout << 8;
    else if (x == 2)
        cout << 4;
    else if (x == 3)
        cout << 2;
    else if (x == 0)
        cout << 6;
}