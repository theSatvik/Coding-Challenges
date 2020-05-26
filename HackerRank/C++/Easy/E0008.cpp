#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int r[100],a;
    cin>>a;
    for (int i=0;i<a;++i)
    cin>>r[i];
    for (int i=(a-1);i>=0; i--)
    {
    cout<<r[i]<<" ";
    }
   return 0;
}

// we can also use reverse() which is defined in algorithm
