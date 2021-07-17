#include<iostream>
using namespace std;

int main(){
	
	int n,a,b,c=0;
	cin>>n;
	
	cin>>a;
	n--;
	while(n-->0){
		cin>>b;
		if(b!=a)
			c++;
		a = b;	
	}
	
	cout<<++c;
	
	return 0;
}
