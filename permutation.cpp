#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,val;
		cin>>n;
		
		int a[n]={0};
		
		for(int i=0;i<2*n;i++){
			cin>>val;
			if(a[val-1]==0)
				cout<<val<<" ";
			a[val-1] = 1;
		}
		cout<<endl;
	}
	
	return 0;
}
