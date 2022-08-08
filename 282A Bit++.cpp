#include <iostream>
using namespace std;

int main()
{
    string s;
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "++X")
            c++;
        if (s == "X++")
            c++;
        if (s == "--X")
            c--;
        if (s == "X--")
            c--;
    }
    cout << c;
    return 0;
}