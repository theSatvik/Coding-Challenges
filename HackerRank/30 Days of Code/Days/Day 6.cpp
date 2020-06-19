#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void oddeven(string s)
{
        for(int i=0 ; i<=s.length(); i+=2)
        {
                cout<<s[i];
        }
       // cout<<" ";
        for(int j=1 ; j<=s.length(); j+=2)
        {
                cout<<s[j];
        }
        cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
       string q;
       cin>>q;
       oddeven(q);     
    }
     return 0;
}
