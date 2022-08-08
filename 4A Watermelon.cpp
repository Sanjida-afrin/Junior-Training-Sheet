#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, x, y;
    cin >> n;
    if (n == 2)
        cout << "NO";
    else if (n % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}