#include<iostream>
using namespace std;

int main(){
	
	int n,k,a,i=0;
	cin>>n>>k;
	
	while(n-->0){
		cin>>a;
		a = 5-a;
		if(a>=k)
			i++;
	}
	
	cout<<i/3;
	
	return 0;
}
