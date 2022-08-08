#include <iostream>
using namespace std;
int main()
{
    long long int n, i, d, d1;
    ;
    cin >> n;

    if (n % 2 == 0)
    {
        d = n / 2;
        cout << d << endl;
    }
    else if (n % 2 == 1)
    {
        d1 = n / 2 + 1;
        cout << -d1 << endl;
    }
}