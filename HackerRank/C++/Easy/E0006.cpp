#include <iostream>
#include <cstdio>
using namespace std;


void printMaxThree(int a, int b, int c, int d)
{
    if(a >= b && a >= c && a >= d)
    cout<<a;
    else if(b > a && b > c && b > d)
   cout<<b;
    else if(c > a && c > b && c > d)
        cout<<c;
    else
        cout<<d;
}


int main() 
{
    int a, b, c, d;
    cin >>a>>b>>c>>d;
    printMaxThree(a,b,c,d);
     return 0;
}

