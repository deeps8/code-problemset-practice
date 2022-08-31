#include<iostream>
#include<cmath>
using namespace std;

/*
	Method 1 : Using Iteration. (Brute Force)
	Every element have 2 options to be in subset.
	So the number of subset of N elements is => 2^N
	
	It also goes same for Binary Number containing N number of digits.
	
	_ _ _  =>  1 1 1
	
	we can use this method to show the subsets of an Array.
	
*/
int decimalToBinary(int num){
	int p=1,ans=0;
	while(num){
		ans += p*(num%2);
		num/=2;
		p*=10;
	}
	return ans;
}

int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	
	// code.
	int supersets = pow(2,n),bin,r;

	for(int i=0;i<supersets;i++){
		bin = decimalToBinary(i); 			// we will calculate Binary value of 'i' and use is to see which eleto display.
//		cout<<bin<<" : ";
		for(int j=0;j<n;j++){
			r = bin%10;
			if(r)
				cout<<a[n-j-1]<<" ";
			else
				cout<<"- ";
			
			bin /= 10;
		}
		
		cout<<endl;
	}
	
	
	return 0;
}
