// https://codeforces.com/problemset/problem/1223/A
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		if(n==2)
			cout<<2<<endl;
		else if(n%2==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	
	return 0;
}
