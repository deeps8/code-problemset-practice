#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int a,b,n,t=1;
	cin>>a>>b>>n;
	
	while(n>0){
		
		t=-t;
		
		if(t==-1){
			n = n - __gcd(a,n);
		}
		else{
			n = n - __gcd(b,n);
		}
	}
	
	if(t==-1)
		cout<<0;
	else
		cout<<1;		
	
	return 0;
}
