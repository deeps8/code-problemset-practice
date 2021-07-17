// https://codeforces.com/problemset/problem/1206/A
#include<iostream>
using namespace std;

int main(){
	
	int n,m,nmax=0,mmax=0;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];	
		if(a[i]>nmax)
			nmax=a[i];	
	}
	
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];	
		if(b[i]>mmax)
			mmax=b[i];	
	}
	
	cout<<nmax<<" "<<mmax;

	
	return 0;
}
