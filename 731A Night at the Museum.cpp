#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x, sum = 0, k, m;
    m = 'a' - s[0];
    for (int i = 0; i < s.size() - 1; i++)
    {
        x = s[i] - s[i + 1];
        if (x < 0)
            x = x * (-1);
        // cout<<x<<" ";
        if (x > 13)
        {
            k = 26 - x;
            sum = sum + k;
        }
        else
            sum = sum + x;
    }
    if (m < 0)
        m = m * (-1);
    if (m > 14)
        sum = sum + (26 - m);
    else
        sum = sum + m;
    cout << sum;
}
