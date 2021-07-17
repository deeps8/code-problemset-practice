#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,m,sum=0;
		cin>>n>>m;
		if(n%2==0)
			sum = (n/2)*m;
		else
			sum = sum + m%2 + m/2 + (n/2)*m;	
			
		cout<<sum<<endl;
	}
	
	return 0;
}
