#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,eve=1;
		cin>>n;
		
		if((n/2)%2){
			cout<<"NO"<<endl;
			continue;
		}
		
		cout<<"YES"<<endl;
		for(int i=0;i<n;i+=2){
			cout<<i+2<<" ";
		}
		
		for(int i=1;i<n;i+=2){
			if(i!=n-1)
				cout<<i<<" ";
			else
				cout<<eve+i<<" ";
			eve++;		
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
