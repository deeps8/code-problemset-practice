// https://codeforces.com/problemset/problem/1526/A
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> A(2*n),B(2*n);
		
		for(auto &a : A )
			cin>>a;
		
		sort(A.begin(),A.end());	
		
		for(int i=0;i<n;i++){
			B[2*i] = A[i];
			B[2*i+1] = A[n+i];
		}
		
		for(int i=0;i<2*n;i++)
			cout<<B[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
