// https://codeforces.com/problemset/problem/1514/A
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m,f=false;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
	        m = sqrt(a[i]);
	        if(m * m != a[i]){
	            f = true;
	        }
		}
			

		
		if(f)
			cout<<"YES \n";
		else
			cout<<"NO \n";	
	}
		
	return 0;
}
