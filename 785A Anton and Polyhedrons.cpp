
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 0, n, i;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "Tetrahedron")
            x += 4;
        else if (s == "Cube")
            x += 6;
        else if (s == "Octahedron")
            x += 8;
        else if (s == "Dodecahedron")
            x += 12;
        else if (s == "Icosahedron")
            x += 20;
    }
    cout << x;
}