#include<bits/stdc++.h>
using namespace std;

void func(string q)
{
    string ans;
    int s=q.size();
    cout<<q[0];
    for(int i=1 ; i<s; i+=2)
    cout<<q[i];
	cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    	string a;
    	cin>>a;
    	func(a);
	}
	
    return 0;
}
