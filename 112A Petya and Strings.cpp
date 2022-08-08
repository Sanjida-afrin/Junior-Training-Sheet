#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, n = 0, k = 0;
    string s, s1;
    cin >> s;
    cin >> s1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] + 32;
    }
    int d = s.compare(s1);
    if (d == 0)
        cout << "0";
    if (d > 0)
        cout << "1";
    if (d < 0)
        cout << "-1";
}
