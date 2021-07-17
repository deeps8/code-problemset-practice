#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		cin>>n;
		
		if(n>30){
			cout<<"YES\n";
			if(n==36 || n==40 || n==44)
				cout<<"6 10 15 "<<n-31<<endl;
			else
				cout<<"6 10 14 "<<n-30<<endl;
		}
		else
			cout<<"NO\n";	
		
	}
	
	return 0;
}
