#include <iostream>
using namespace std;
int main()
{
    long long int x, n, i, j, c = 0;
    cin >> x >> n;
    for (i = 1; i <= x; i++)
    {

        c = c + (n + (i % 5)) / 5;
    }
    cout << c;
}
