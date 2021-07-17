// https://codeforces.com/problemset/problem/1466/B
#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n,d=1;
		cin>>n;
		int a[n];
		
		cin>>a[0];
		
		
		for(int i=1;i<n;i++){
			cin>>a[i];
				
			if(a[i]<a[i-1]){
				++a[i];
				continue;
			}
			if(a[i]==a[i-1]){
				d++;
				a[i]++;
				continue;
			}
			if(a[i]>a[i-1])
				d++;
		}
		
			
		cout<<d<<endl;
		
	}
	
	return 0;
}
