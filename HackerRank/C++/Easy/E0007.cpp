#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
        int temp = *a + *b ;
        *b =abs ( *a - *b);
        *a =temp ;
}

int main() {
    int a, b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl<<b;
    return 0;
}
