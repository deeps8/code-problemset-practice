#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		cin>>n;
		
		for(int i=2;i<=n;i++)
			cout<<i<<" ";
		cout<<1<<" "<<endl;			
	}
	
	return 0;
}
