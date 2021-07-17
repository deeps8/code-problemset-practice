#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		string b;
		cin>>n>>b;
		string a(n,'1');
		
		for(int i=1;i<n;i++){
			if(a[i]+b[i] == a[i-1]+b[i-1]){
				a[i]='0';
			}
		}
		cout<<a<<endl;
	}
	
	return 0;
}
