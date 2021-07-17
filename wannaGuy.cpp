#include<iostream>
using namespace std;

int main(){
	
	int n,m,i;
	cin>>n;
	int a[n]={0};
	
	for(int j=0;j<2;j++){
		cin>>m;
		while(m-->0){
			cin>>i;
			a[i-1]=1;
		}
	}
	
	while(n-->0){
		if(a[n]==0){
			cout<<"Oh, my keyboard!";
			return 0;
		}	
	}
	
	cout<<"I become the guy.";
	
	return 0;
}
