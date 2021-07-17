#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b[n]={0};
		for(int i=0,j=n-1;i<n;i++){
			cin>>a;
			b[j] = a;
			j--;
		}
		
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		
		cout<<endl;
	}
	return 0;
}
