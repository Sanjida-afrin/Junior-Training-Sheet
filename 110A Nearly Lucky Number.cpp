#include <iostream> 
#include <string>
using namespace std;
int main()
{
    int c = 0;
    string s;
    cin >> s;
    // if(s.size()==1 && s[0]=='7') cout<<"NO";

    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
            // cout<<c;
        }
    }
    // cout<<c;
    if (c == 4 || c == 7)
        cout << "YES";
    else
        cout << "NO";
}
