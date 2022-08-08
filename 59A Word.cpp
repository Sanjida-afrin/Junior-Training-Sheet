#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int x = 0, n = 0, i, y;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            x++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            n++;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (x > n)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }
    cout << s;
}
