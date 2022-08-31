/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

Input : 

6
-3 2 3 -4 3 1

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n],temp=n,maxSum=0,indx;
	cin>>a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		a[i] += a[i-1];
	}

	for(int i=0;i<n;i++){
		temp = (-1 + sqrt(1+4*2*(temp-i)))/2;
		temp = (temp*(temp+1))/2;
		


		if(i){
			indx = a[i+temp-1]-a[i-1];
		}
		else{
			indx = a[i+temp-1];
		}
		
		temp = n;
		if(maxSum<indx)
			maxSum = indx;
	}

	cout<<maxSum;
	return 0;
}
