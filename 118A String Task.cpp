#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, n;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'e' && s[i] != 'i' && s[i] != 'y' && s[i] != 'u')
        {
            cout << '.' << s[i];
        }
    }
}
