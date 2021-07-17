#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		long long a[3];
		cin>>a[0]>>a[1]>>a[2];
		
		sort(a,a+3);

		a[2] = a[2] - (a[1]-a[0]);		
		a[0] = a[0] + (a[1]-a[0]);
		
		a[0] = a[0]+a[2]/2;
		
		cout<<a[0]<<endl; 
			
	}
	
	return 0;
}
