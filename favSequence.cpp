#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,x,y;
		cin>>n;
		
		int a[n];
		
		for(int i=0;i<n;i++){
			cin>>x;
			a[i] = x;
		}
		
		n--;
		
		for(int i=0,j=n;i<j;i++,j--){
			cout<<a[i]<<" "<<a[j]<<" ";
		}
		if(n%2==0)
			cout<<a[n/2];
		cout<<endl;
	}
	
}
