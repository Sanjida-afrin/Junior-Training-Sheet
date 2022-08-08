#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i;
    string s;
    cin >> s;
    for (i = 0; s[i] != 0; i++)
    {
        s[i] = s[i] - 48;
        if (s[0] == 9)
        {
            s[i] = s[i] + '0';
        }
        else if (s[i] > 4)
        {
            s[i] = 9 - s[i];
            s[i] = s[i] + '0';
        }
        else
        {
            s[i] = s[i] + '0';
        }
    }
    cout << s;
}

