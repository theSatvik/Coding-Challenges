#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2 ;
	cin>>s1;
	int a=s1.size();
	for(int i=0 ; i<a ; i++)
	{
	    char ch= tolower(s1[i]);
	    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
		{
	       continue; 
	    }
		else
		{
	       cout<<"."<<ch;
	    }
	}
	cout<<s2;
	return 0;
}
