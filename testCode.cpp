// https://codeforces.com/problemset/problem/1436/A
#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,m,a;
		long long sum = 0;
		cin>>n>>m;
		
		for(int i=0;i<n;i++){
			cin>>a;
			sum += a;
		}
		
		if(sum==m)
			cout<<"YES \n";
		else
			cout<<"NO \n";	
	}
	
	return 0;
}
