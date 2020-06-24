#include <bits/stdc++.h>
using namespace std;

int factorial(int n) 
{
        int result=1;
        if (n<=1)
        return 1;
        else
        result = n *factorial(n-1);
        return result;
}

int main()
{
    long long  n;
    cin >> n;
    long long result = factorial(n);
    cout<< result << "\n";
   
    return 0;
}
