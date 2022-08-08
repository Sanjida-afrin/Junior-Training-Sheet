#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0, i, t;
    string s;
    cin >> n;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '0')
            x++;
        else
            y++;
    }
    if (x < y)
    {
        t = x;
        x = y;
        y = t;
    }
    cout << x - y << endl;
}