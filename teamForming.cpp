// https://codeforces.com/problemset/problem/1092/B
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,s=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);
	
	for(int i=0;i<n;i+=2){
		s += a[i+1] - a[i]; 	
	}
	
	cout<<s;
	return 0;
}
