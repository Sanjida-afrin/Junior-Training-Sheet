#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0, a, b, c, z = 0;
    cin >> n;
    while (n--)
    {
        // x=0;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";
}
