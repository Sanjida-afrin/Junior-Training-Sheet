#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int t, x = 0, i, y = 0;
    cin >> t;
    string s;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
            x++;
        else
            y++;
    }
    if (x > y)
        cout << "Anton";
    else if (y > x)
        cout << "Danik";
    else
        cout << "Friendship";
}