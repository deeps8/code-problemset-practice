#include<iostream>
using namespace std;

int main(){
	
	int n,g;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>g;
		a[g-1] = i;
	}
	
	for(int i=0;i<n;i++)
		cout<<a[i]+1<<" ";
	
	return 0;
}
