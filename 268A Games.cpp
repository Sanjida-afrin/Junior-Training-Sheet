#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,c=0,t;
    cin>>t;
    int a[t+1],b[t+1];

    for(i=0; i<t; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<t; i++)
    {
        for(j=0; j<t; j++)
        {
            if(a[i]==b[j])
                c++;
        }
    }
    cout<<c<<endl;
}

