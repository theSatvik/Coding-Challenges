#include <iostream>
#include <cstdio>
using namespace std;

int main()
 {
    int a,b,n;
    cin>>a>>b;
    
    string num[ ] = {"zero" ,"one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    
    for(n=a;n<=b;n++)
    {
        if(n<=9)
            cout << num[n] << endl;
        else
            if(n%2==0)
                cout << "even\n";
            else
                cout << "odd\n";
    }

    return 0;
}

