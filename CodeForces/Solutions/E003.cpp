#include <iostream>
using namespace std;


int main()
 {
 	string a;
	int n;
 	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
    int z=a.length();
        if (z > 10) 
		{
            cout << a[0] <<z - 2 << a[z - 1] << endl;
        }
		 else
		{
            cout << a << endl;
        }
    }
}
