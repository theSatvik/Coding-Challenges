#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    long int n,a,sum=0;
    scanf("%ld", &n);

    for(int i=0;i<5;++i)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%ld",sum);
    return 0;
}
