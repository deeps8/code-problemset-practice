#include<iostream>
using namespace std;

// sum of first n natural numbers;
int main(){
	
	int n,sum =0;
	cout<<"Enter a number : ";
	cin>>n;
	
	// method 1 using for loop
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	
	cout<<"Method 1 Loop : sum = "<<sum<<endl;
	
	
	// method 2  using formula
	cout<<"Method 2 Formula : sum = "<<n*(n+1)/2<<endl;
	
	
	return 0;
}
