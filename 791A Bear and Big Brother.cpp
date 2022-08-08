#include <iostream>
using namespace std;
int main()
{
    int l, b, i, x, y;
    cin >> l >> b;
    x = l * 3;
    y = b * 2;
    if (x > y)
        cout << "1";
    else
    {
        for (i = 2; i <= 10; i++)
        {
            x = x * 3;
            y = y * 2;
            if (x > y)
                break;
        }
        cout << i;
    }
}