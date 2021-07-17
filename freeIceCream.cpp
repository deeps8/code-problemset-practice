#include<iostream>
using namespace std;

int main(){
	
	long long n,x,c=0;
	cin>>n>>x;
	
	while(n-->0){
		char op;long long a;
		cin>>op>>a;
		if(op=='+')
			x += a;
		else if(op=='-' && a<=x)
			x -= a;	
		else if(op=='-' && a>x)
			c++;	
			
	}
	
	cout<<x<<" "<<c;
	
	return 0;
}
