#include<bits/stdc++.h>
using namespace std;
 
int main()
{
      int CountVal=0;  // Number of values before 1 has occurred while traversing the matrix in Row - Major Order 
      int Value;       // Represents individual values 
	cin>>Value;
	while(Value!=1) {    // Loop until 1 doesnot occur
		cin>>Value;
		CountVal++;   
	}
	cout<<abs(CountVal%5-2) + abs(CountVal/5-2);   
	// abs(CountVal%5-2) it eliminates the rows before the row which contains 1 and calculates the difference from the center element of that row 
	//     0 0 0 0 0		0 0 0 0 0		
 	//     0 0 0 1 0		0 0 1 0 0    
	//     0 0 0 0 0      --->	0 0 0 0 0
	//     0 0 0 0 0		0 0 0 0 0
	//     0 0 0 0 0		0 0 0 0 0
	
	// and  abs(CountVal/5-2) determines the difference or the steps needed to align 1 at the center of matrix by finding vertical differnence    
	//     0 0 0 0 0		0 0 0 0 0		
 	//     0 0 1 0 0		0 0 0 0 0    
	//     0 0 0 0 0      --->	0 0 1 0 0
	//     0 0 0 0 0		0 0 0 0 0
	//     0 0 0 0 0		0 0 0 0 0
	
	return 0;
}
