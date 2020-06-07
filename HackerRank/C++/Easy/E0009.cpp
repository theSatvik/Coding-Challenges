#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r[1000],a,i;
    cin>>a;
    for (i=0;i<a;++i)
    cin>>r[i];
    for (i=(a-1);i>=0;--i)
    {
            cout<<r[i]<<" ";
    }
    return 0;
}
