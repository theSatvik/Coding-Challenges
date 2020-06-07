#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl;
    return 0;
}

//long long double for 10*9 input
//ceil function returns the smallest possible integer value which is equal to the value or greater than that
