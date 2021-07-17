#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		long long sum=0;
		cin>>n;
		
		for(int i=1;i<n/2;i++){
			sum = sum + pow(2,i);
		}	
		
		sum = sum + pow(2,n);
		
		for(int i=n/2;i<n;i++){
			sum = sum - pow(2,i);
		}
		
		cout<<sum<<endl;	
	}
	
	return 0;
}
